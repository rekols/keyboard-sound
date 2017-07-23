#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    w.move((QDesktopWidget::width() - w.width()) / 2,
           (QDesktopWidget::height() - w.height()) / 2);

    return a.exec();
}
