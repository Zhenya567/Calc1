#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QObject * getsender() { return this->sender();}
private:
    Ui::MainWindow *ui;

private slots:
    //void digits_numbers();
   /* void operations();
    void on_pushButton_dot_clicked();
    void math_operations();
    //void on_pushButton_16_clicked();
    void on_pushButton_equal_clicked();
    void on_pushButton_clear_clicked();
    //void on_pushButton_plus_clicked();
    //void on_pushButton_plus_clicked();
*/

};

#endif // MAINWINDOW_H
