#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QByteArray>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    port = NULL;    //indica que el objeto puerto no esta creado;
    portName = "";
    EnumerarPuertos();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete port;
}

void MainWindow::EnumerarPuertos()
{
    ui->comboBoxPort->clear();

    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();

    for (int i = 0; i < ports.size(); i++)
    {
        ui->comboBoxPort->addItem(ports.at(i).portName()/*, ports.at(i).portName()*/);
    }
}

void MainWindow::on_pushButtonConectar_clicked()
{
    if(!port)
    {
        port = new QSerialPort(portName);
        port->setBaudRate(QSerialPort::Baud9600);
        port->setFlowControl(QSerialPort::NoFlowControl);
        port->setParity(QSerialPort::NoParity);
        port->setDataBits(QSerialPort::Data8);
        port->setStopBits(QSerialPort::OneStop);
        if(!port->open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(this,"Error","No se puede abrir el puerto " + port->portName());
            delete port;
            port = NULL;
        }
        else
        {
            ui->pushButtonConectar->setText("Desconectar");
            connect(port,SIGNAL(readyRead()),this,SLOT(on_port_readyRead()));
        }
    }
    else
    {
        delete port;
        port = NULL;
        ui->pushButtonConectar->setText("Conectar");
    }
}

void MainWindow::on_pushButtonEnviar_clicked()
{
    if(port)
    {
        QByteArray aux;

        aux.append(ui->plainTextEditTX->toPlainText());
        port->write(aux, aux.size() );
        QMessageBox::information(this, "Texto a Enviar", QString::fromUtf8(aux));
        ui->plainTextEditTX->clear();
    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_port_readyRead()
{
    QByteArray aux;
    aux.resize(port->bytesAvailable());
    port->read(aux.data(),aux.size());
    ui->plainTextEditRX->insertPlainText(aux);
}

void MainWindow::on_comboBoxPort_currentIndexChanged(int index)
{
    portName = ui->comboBoxPort->itemText(index);//itemData(index).toString();    //recupero la data del item de indice index
}
