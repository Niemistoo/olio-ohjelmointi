#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_N0_clicked();

    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;               //Qstring is handy as it can be printed easily to QLineEdit
    int state;                              //State variable is needed to know which number is being given
    float result;                           //Result is calculated when user presses enter
    short operand;                          //Operand is stored when user presses any operand button

    void numberClickedHandler();            //This function is called from all number QPushButton click handlers
    void clearAndEnterClickHandler();       //This handles clear and enter buttons
    void addSubMulDivClickHandler();        //Handler for operand buttons
    void resetLineEdits();                  //Reset calculations
};
#endif // MAINWINDOW_H
