#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "arp_table.h"
#include "mainwindow.h"
#include "ARPTable.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void get_mac_by_ip();

private:
    Ui::MainWindow *ui;
    arp_table *_exec;
};

#endif // MAINWINDOW_H
