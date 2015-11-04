#include "ARPTable.h"
#include "ui_ARPTable.h"

ARPTable::ARPTable(QWidget *parent, Cell* _table, int _count) :
    QDialog(parent),
    ui(new Ui::ARPTable)
{
    ui->setupUi(this);
    ui->te->clear();
    for (int _i = 0; _i < _count; _i++)
    {
        ui->te->append(tr("IP:    %1").arg(_table[_i].ip));
        ui->te->append(tr("MAC:   %1").arg(_table[_i].mac));
        ui->te->append(tr("Type:  %1").arg(_table[_i].type));
        ui->te->append("<----------------------------->\n");
    }
    ui->label->setText(tr("Total: %1").arg(_count));
    ui->label_2->setText(tr("Dynamic: %1").arg(all_dynamic(_table, _count)));
    ui->label_3->setText(tr("Static: %1").arg(all_static(_table, _count)));
    ui->label_4->setText(tr("Invalidated: %1").arg(all_invalidated(_table, _count)));
}

int ARPTable::all_dynamic(Cell *_table, int _count)
{
    int _amount = 0;
    for (int _i = 0; _i < _count; _i++)
        if (strcmp(_table[_i].type, "Dynamic") == 0)
            _amount++;
    return _amount;
}

int ARPTable::all_static(Cell *_table, int _count)
{
    int _amount = 0;
    for (int _i = 0; _i < _count; _i++)
        if (strcmp(_table[_i].type, "Static") == 0)
            _amount++;
    return _amount;
}

int ARPTable::all_invalidated(Cell *_table, int _count)
{
    int _amount = 0;
    for (int _i = 0; _i < _count; _i++)
        if (strcmp(_table[_i].type, "Invalidated") == 0)
            _amount++;
    return _amount;
}

ARPTable::~ARPTable()
{
    delete ui;
}

void ARPTable::on_pushButton_clicked()
{
    this->close();
}
