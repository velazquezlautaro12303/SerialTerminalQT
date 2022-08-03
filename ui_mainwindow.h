/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBoxPort;
    QLabel *label;
    QPlainTextEdit *plainTextEditRX;
    QLabel *label_2;
    QPlainTextEdit *plainTextEditTX;
    QPushButton *pushButtonEnviar;
    QPushButton *pushButtonConectar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(362, 372);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBoxPort = new QComboBox(centralWidget);
        comboBoxPort->setObjectName(QString::fromUtf8("comboBoxPort"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxPort->sizePolicy().hasHeightForWidth());
        comboBoxPort->setSizePolicy(sizePolicy);
        comboBoxPort->setMaximumSize(QSize(16777215, 16777215));
        comboBoxPort->setMaxVisibleItems(4);

        gridLayout->addWidget(comboBoxPort, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        plainTextEditRX = new QPlainTextEdit(centralWidget);
        plainTextEditRX->setObjectName(QString::fromUtf8("plainTextEditRX"));

        gridLayout->addWidget(plainTextEditRX, 1, 1, 1, 3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        plainTextEditTX = new QPlainTextEdit(centralWidget);
        plainTextEditTX->setObjectName(QString::fromUtf8("plainTextEditTX"));

        gridLayout->addWidget(plainTextEditTX, 2, 1, 1, 2);

        pushButtonEnviar = new QPushButton(centralWidget);
        pushButtonEnviar->setObjectName(QString::fromUtf8("pushButtonEnviar"));
        pushButtonEnviar->setEnabled(true);

        gridLayout->addWidget(pushButtonEnviar, 2, 3, 1, 1);

        pushButtonConectar = new QPushButton(centralWidget);
        pushButtonConectar->setObjectName(QString::fromUtf8("pushButtonConectar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonConectar->sizePolicy().hasHeightForWidth());
        pushButtonConectar->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonConectar, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        comboBoxPort->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "RX", 0, QApplication::UnicodeUTF8));
        plainTextEditRX->setPlainText(QString());
        label_2->setText(QApplication::translate("MainWindow", "TX", 0, QApplication::UnicodeUTF8));
        plainTextEditTX->setPlainText(QString());
        pushButtonEnviar->setText(QApplication::translate("MainWindow", "Enviar", 0, QApplication::UnicodeUTF8));
        pushButtonConectar->setText(QApplication::translate("MainWindow", "Conectar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
