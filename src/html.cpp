#include "html.h"
#include <QObject>

myHtml::myHtml(QWidget *parrent) : window(new QWidget(parrent)),hBox(new QHBoxLayout(window)),
    textEdit(new QPlainTextEdit), webView(new QWebEngineView)
{
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    textEdit->setSizePolicy(sizePolicy);
    webView->setSizePolicy(sizePolicy);

    hBox->addWidget(textEdit);
    hBox->addWidget(webView);

    window->setWindowTitle("HTML converter");
    window->setMinimumSize(800,600);
    window->resize(1920,1080);
}

void myHtml::show()
{
    window->show();
}

void myHtml::print()
{
    QObject::connect(textEdit, &QPlainTextEdit::textChanged,[this]()
                     {
        webView->setHtml(textEdit->toPlainText());
    });
}
