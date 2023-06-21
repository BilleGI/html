#include <QApplication>
#include "html.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    myHtml translateHtml(nullptr);
    translateHtml.print();
    translateHtml.show();
    app.exec();
}
