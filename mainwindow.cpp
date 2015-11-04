#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->cmb_ip, SIGNAL(activated(int)), this, SLOT(get_mac_by_ip()));
    _exec = new arp_table();
    _exec->get_arp_table();
    //_exec->get_arp_table();
    for (int _i = 0; _i < _exec->length(); _i++)
        ui->cmb_ip->addItem(tr("%1").arg(_exec->arptable()[_i].ip));
}

MainWindow::~MainWindow()
{
    delete _exec;
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    delete _exec;
    _exec = new arp_table();
    _exec->get_arp_table();
    ui->cmb_ip->clear();
    for (int _i = 0; _i < _exec->length(); _i++)
        ui->cmb_ip->addItem(tr("%1").arg(_exec->arptable()[_i].ip));
    ui->out_mac->setText("");
    ui->out_type->setText("");
}

void MainWindow::on_pushButton_clicked()
{
    ARPTable t(this, _exec->arptable(), _exec->length());
    t.show();
    t.exec();
}

void MainWindow::get_mac_by_ip()
{
    int _i = 0;
    while (_i < _exec->length() && strcmp(ui->cmb_ip->currentText().toAscii().data(), _exec->arptable()[_i].ip) != 0)
        _i++;
    if (_i < _exec->length())
    {
        ui->out_mac->setText(tr("%1").arg(_exec->arptable()[_i].mac));
        ui->out_type->setText(tr("%1").arg(_exec->arptable()[_i].type));
    }
    else
        QMessageBox::information(this, "Error!", "No such ip in the ARP-table!", QMessageBox::Ok);
}
