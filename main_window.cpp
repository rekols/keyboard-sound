#include "main_window.h"
#include <QSound>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QVBoxLayout();
    soundBox = new QComboBox();
    schemeBox = new QComboBox();
    currentSound = "sound/bubble/";
    soundIndex = "0.wav";

    QLabel *label = new QLabel("声音方案:");
    QLabel *label1 = new QLabel("音调:");

    layout->setMargin(50);
    layout->addStretch();
    layout->addWidget(label);
    layout->addWidget(soundBox);
    layout->addStretch();
    layout->addWidget(label1);
    layout->addWidget(schemeBox);
    layout->addStretch();

    mainWidget->setLayout(layout);
    setCentralWidget(mainWidget);

    connect(soundBox, SIGNAL(currentIndexChanged(int)), this, SLOT(soundBoxCurrentIndexChanged(int)));
    connect(schemeBox, SIGNAL(currentIndexChanged(int)), this, SLOT(schemeCurrentIndexChanged(int)));

    initUI();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initUI()
{
    soundBox->addItem("气泡");
    soundBox->addItem("机械");

    for (int i=0; i<4; ++i) {
        schemeBox->addItem(QString::number(i));
    }
}

void MainWindow::keyBoardPress()
{
    QSound::play(":/" + currentSound + soundIndex);
}

void MainWindow::soundBoxCurrentIndexChanged(int index)
{
    if (index == 0)
        currentSound = "sound/bubble/";
    else
        currentSound = "sound/mechanical/";
}

void MainWindow::schemeCurrentIndexChanged(int index)
{
    soundIndex = QString::number(index) + ".wav";
}
