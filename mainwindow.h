#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_comboBoxPort_currentIndexChanged(int index);
    void on_pushButtonEnviar_clicked();
    void on_pushButtonConectar_clicked();
    void on_port_readyRead();

private:
    QString portName;
    QSerialPort *port;
    void EnumerarPuertos();
};

#endif // MAINWINDOW_H
