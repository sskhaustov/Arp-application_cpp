//<------------------------------------��������� ��� ��������� ARP - �������--------------------------------------------->
//<----------------------------������ ������� �������� � ������� (��� �� ����� ������)----------------------------------->
//
//
#ifndef STRING_TABLE_H
#define STRING_TABLE_H

#include "header.h"

class Cell //<------ ������ �������
{
    public:
        Cell();
        Cell(const Cell &_other);
        ~Cell();
        char ip[256];
        char mac[256];
        char type[30];
};



#endif // STRING_TABLE_H
