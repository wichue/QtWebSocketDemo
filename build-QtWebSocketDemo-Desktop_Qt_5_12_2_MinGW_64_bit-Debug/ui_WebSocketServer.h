/********************************************************************************
** Form generated from reading UI file 'WebSocketServer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBSOCKETSERVER_H
#define UI_WEBSOCKETSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebSocketServer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editAddress;
    QLabel *label_2;
    QLineEdit *editPort;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnListen;
    QLabel *label_3;
    QTextEdit *editRecv;
    QLabel *label_4;
    QTextEdit *editSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *footLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSend;

    void setupUi(QWidget *WebSocketServer)
    {
        if (WebSocketServer->objectName().isEmpty())
            WebSocketServer->setObjectName(QString::fromUtf8("WebSocketServer"));
        WebSocketServer->resize(355, 446);
        verticalLayout = new QVBoxLayout(WebSocketServer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WebSocketServer);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        editAddress = new QLineEdit(WebSocketServer);
        editAddress->setObjectName(QString::fromUtf8("editAddress"));

        horizontalLayout->addWidget(editAddress);

        label_2 = new QLabel(WebSocketServer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editPort = new QLineEdit(WebSocketServer);
        editPort->setObjectName(QString::fromUtf8("editPort"));

        horizontalLayout->addWidget(editPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnListen = new QPushButton(WebSocketServer);
        btnListen->setObjectName(QString::fromUtf8("btnListen"));

        horizontalLayout->addWidget(btnListen);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(WebSocketServer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        editRecv = new QTextEdit(WebSocketServer);
        editRecv->setObjectName(QString::fromUtf8("editRecv"));

        verticalLayout->addWidget(editRecv);

        label_4 = new QLabel(WebSocketServer);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        editSend = new QTextEdit(WebSocketServer);
        editSend->setObjectName(QString::fromUtf8("editSend"));

        verticalLayout->addWidget(editSend);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        footLabel = new QLabel(WebSocketServer);
        footLabel->setObjectName(QString::fromUtf8("footLabel"));

        horizontalLayout_2->addWidget(footLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnSend = new QPushButton(WebSocketServer);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout_2->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WebSocketServer);

        QMetaObject::connectSlotsByName(WebSocketServer);
    } // setupUi

    void retranslateUi(QWidget *WebSocketServer)
    {
        WebSocketServer->setWindowTitle(QApplication::translate("WebSocketServer", "Form", nullptr));
        label->setText(QApplication::translate("WebSocketServer", "Address:", nullptr));
        editAddress->setText(QApplication::translate("WebSocketServer", "Any", nullptr));
        label_2->setText(QApplication::translate("WebSocketServer", "Port:", nullptr));
        editPort->setText(QApplication::translate("WebSocketServer", "12345", nullptr));
        btnListen->setText(QApplication::translate("WebSocketServer", "Listen", nullptr));
        label_3->setText(QApplication::translate("WebSocketServer", "Recv:", nullptr));
        label_4->setText(QApplication::translate("WebSocketServer", "Send:", nullptr));
        editSend->setHtml(QApplication::translate("WebSocketServer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I'm Server.</p></body></html>", nullptr));
        footLabel->setText(QString());
        btnSend->setText(QApplication::translate("WebSocketServer", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebSocketServer: public Ui_WebSocketServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBSOCKETSERVER_H
