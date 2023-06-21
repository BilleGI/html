#pragma once
#include <QWebEngineView>
#include <QHBoxLayout>
#include <QPlainTextEdit>

class myHtml : public QWidget
{
    Q_OBJECT
public:
    myHtml()=default;
    myHtml(QWidget *parrent);
    void show();
    void print();
private:
    QWidget *window;
    QHBoxLayout *hBox;
    QPlainTextEdit *textEdit;
    QWebEngineView *webView;
};
