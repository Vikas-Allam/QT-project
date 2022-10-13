#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QVector>
#include<QString>
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
      void print();
      QVector<QString>v;

private slots:
    void on_insert_clicked();

    void on_display_clicked();


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
