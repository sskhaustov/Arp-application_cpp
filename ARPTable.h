#ifndef ARPTABLE_H
#define ARPTABLE_H

#include <QDialog>
#include "string_table.h"

namespace Ui {
class ARPTable;
}

class ARPTable : public QDialog
{
    Q_OBJECT
    
public:
    explicit ARPTable(QWidget *parent, Cell *_table, int _count);
    ~ARPTable();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::ARPTable *ui;
    int all_dynamic(Cell *_table, int _count);
    int all_static(Cell *_table, int _count);
    int all_invalidated(Cell *_table, int _count);
};

#endif // ARPTABLE_H
