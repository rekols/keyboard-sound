#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QComboBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *mainWidget;
    QVBoxLayout *layout;
    QComboBox *soundBox;
    QComboBox *schemeBox;

    QString currentSound;
    QString soundIndex;

    void initUI();

private slots:
    void soundBoxCurrentIndexChanged(int index);
    void schemeCurrentIndexChanged(int index);

public slots:
    void keyBoardPress();
};

#endif // MAINWINDOW_H
