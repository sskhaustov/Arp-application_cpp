//<------------------------------------ÊÎÍÒÅÉÍÅÐ ÄËß ÝËÅÌÅÍÒÎÂ ARP - ÒÀÁËÈÖÛ--------------------------------------------->
//<----------------------------ÀÄÐÅÑÀ ÒÀÁËÈÖÛ ÕÐÀÍßÒÑß Â ÑÒÐÎÊÀÕ (ÒÀÊ ÈÕ ÏÐÎÙÅ ÈÑÊÀÒÜ)----------------------------------->
//
//
#ifndef STRING_TABLE_H
#define STRING_TABLE_H

#include "header.h"

class Cell //<------ ÿ÷åéêà òàáëèöû
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
