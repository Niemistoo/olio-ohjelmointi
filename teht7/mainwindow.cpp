#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    switch(currentPlayer){
    case 1:
        player1Time -= 1;  // Add second to gameTime
        qDebug() << "Player 1 time: " << player1Time;
        break;
    case 2:
        player2Time -= 1;
        qDebug() << "Player 2 time: " << player2Time;
        break;
    }
    updateProgressBar();

    if (player1Time == 0) {
        pQTimer->stop();
        ui->btnPlayer1Switch->setDisabled(true);
        setGameInfoText("Player 2 Wins", 16);
    } else if (player2Time == 0) {
        pQTimer->stop();
        ui->btnPlayer2Switch->setDisabled(true);
        setGameInfoText("Player 1 Wins", 16);
    }
}


void MainWindow::on_btnStart_clicked()
{
    qDebug() << "Start button pressed";
    setGameInfoText("Game Started. Player 1 turn", 16);

    currentPlayer = 1;

    pQTimer->start(1000);

    ui->btnStart->setDisabled(true);
    ui->btnShortGame->setDisabled(true);
    ui->btnLongGame->setDisabled(true);
    ui->btnPlayer1Switch->setDisabled(false);
    ui->btnPlayer2Switch->setDisabled(true);
}

void MainWindow::updateProgressBar()
{
    ui->progressBarPlayer1->setValue(player1Time);
    ui->progressBarPlayer2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->labelInfo->setText(text);
}


void MainWindow::on_btnStop_clicked()
{
    qDebug() << "Stop pressed";
    pQTimer->stop();
    setGameInfoText("Select Time and Start New Game", 16);

    ui->progressBarPlayer1->setValue(0);
    ui->progressBarPlayer2->setValue(0);
    ui->btnShortGame->setDisabled(false);
    ui->btnLongGame->setDisabled(false);
}


void MainWindow::on_btnShortGame_clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBarPlayer1->setMaximum(gameTime);
    ui->progressBarPlayer2->setMaximum(gameTime);
    updateProgressBar();

    setGameInfoText("Time set to 120 sec. Start Game", 16);

    ui->btnStart->setDisabled(false);
}


void MainWindow::on_btnLongGame_clicked()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBarPlayer1->setMaximum(gameTime);
    ui->progressBarPlayer2->setMaximum(gameTime);
    updateProgressBar();

    setGameInfoText("Time set to 5 min. Start Game", 16);

    ui->btnStart->setDisabled(false);
}


void MainWindow::on_btnPlayer1Switch_clicked()
{
    setGameInfoText("Player 2 turn", 16);
    currentPlayer = 2;
    ui->btnPlayer1Switch->setDisabled(true);
    ui->btnPlayer2Switch->setDisabled(false);
    qDebug() << "Player " << currentPlayer << "turn";
}


void MainWindow::on_btnPlayer2Switch_clicked()
{
    setGameInfoText("Player 1 turn", 16);
    currentPlayer = 1;
    ui->btnPlayer1Switch->setDisabled(false);
    ui->btnPlayer2Switch->setDisabled(true);
    qDebug() << "Player " << currentPlayer << "turn";
}
