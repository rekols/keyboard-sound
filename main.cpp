#include "main_window.h"
#include <QApplication>
#include <QDesktopWidget>
#include "event_monitor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(400, 340);
    w.setWindowIcon(QIcon(":/image/muse.svg"));
    w.move((QApplication::desktop()->width() - w.width()) / 2,
           (QApplication::desktop()->height() - w.height()) / 2);

    w.show();
    
    EventMonitor eventMonitor;
    QObject::connect(&eventMonitor, &EventMonitor::keyPress, &w, &MainWindow::keyBoardPress);
    eventMonitor.start();

    return a.exec();
}
