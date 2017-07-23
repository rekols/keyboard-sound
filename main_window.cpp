#include "main_window.h"
#include <QSound>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QVBoxLayout();

    mainWidget->setLayout(layout);
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::keyBoardPress()
{
    QSound::play(":/sound/bubble/1.wav");
}
