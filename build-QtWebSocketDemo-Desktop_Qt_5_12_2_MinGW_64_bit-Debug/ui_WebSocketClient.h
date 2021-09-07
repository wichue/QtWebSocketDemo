/********************************************************************************
** Form generated from reading UI file 'WebSocketClient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBSOCKETCLIENT_H
#define UI_WEBSOCKETCLIENT_H

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

class Ui_WebSocketClient
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editUrl;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOpen;
    QLabel *label_3;
    QTextEdit *editRecv;
    QLabel *label_4;
    QTextEdit *editSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *footLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSend;

    void setupUi(QWidget *WebSocketClient)
    {
        if (WebSocketClient->objectName().isEmpty())
            WebSocketClient->setObjectName(QString::fromUtf8("WebSocketClient"));
        WebSocketClient->resize(385, 447);
        verticalLayout = new QVBoxLayout(WebSocketClient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WebSocketClient);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        editUrl = new QLineEdit(WebSocketClient);
        editUrl->setObjectName(QString::fromUtf8("editUrl"));

        horizontalLayout->addWidget(editUrl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOpen = new QPushButton(WebSocketClient);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        horizontalLayout->addWidget(btnOpen);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(WebSocketClient);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        editRecv = new QTextEdit(WebSocketClient);
        editRecv->setObjectName(QString::fromUtf8("editRecv"));

        verticalLayout->addWidget(editRecv);

        label_4 = new QLabel(WebSocketClient);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        editSend = new QTextEdit(WebSocketClient);
        editSend->setObjectName(QString::fromUtf8("editSend"));

        verticalLayout->addWidget(editSend);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        footLabel = new QLabel(WebSocketClient);
        footLabel->setObjectName(QString::fromUtf8("footLabel"));

        horizontalLayout_2->addWidget(footLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnSend = new QPushButton(WebSocketClient);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout_2->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WebSocketClient);

        QMetaObject::connectSlotsByName(WebSocketClient);
    } // setupUi

    void retranslateUi(QWidget *WebSocketClient)
    {
        WebSocketClient->setWindowTitle(QApplication::translate("WebSocketClient", "Form", nullptr));
        label->setText(QApplication::translate("WebSocketClient", "Url", nullptr));
        editUrl->setText(QApplication::translate("WebSocketClient", "ws://localhost:12345", nullptr));
        btnOpen->setText(QApplication::translate("WebSocketClient", "Open", nullptr));
        label_3->setText(QApplication::translate("WebSocketClient", "Recv:", nullptr));
        label_4->setText(QApplication::translate("WebSocketClient", "Send:", nullptr));
        editSend->setHtml(QApplication::translate("WebSocketClient", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I'm Client.</p></body></html>", nullptr));
        footLabel->setText(QString());
        btnSend->setText(QApplication::translate("WebSocketClient", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebSocketClient: public Ui_WebSocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBSOCKETCLIENT_H
