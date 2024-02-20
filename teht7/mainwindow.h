#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_btnShortGame_clicked();

    void on_btnLongGame_clicked();

    void on_btnPlayer1Switch_clicked();

    void on_btnPlayer2Switch_clicked();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;

    QTimer *pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);

signals:



};
#endif // MAINWINDOW_H
