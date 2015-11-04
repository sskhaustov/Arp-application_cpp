#ifndef ARP_TABLE_H
#define ARP_TABLE_H

#include "header.h"

#include "string_table.h"

class arp_table
{
    public:
        arp_table();
        ~arp_table();
        void get_arp_table();
        bool mac_to_string(BYTE _mac[], int _mac_len, char _smac[]);
        Cell* arptable();
        int length();
    private:
        PMIB_IPNETTABLE table; //таблица (указатель на структуру)
        DWORD size; //размер
        char mac[256];  //МАС - адрес
        char ip[256];   //IP - адрес
        char type[30];  //тип адреса
        Cell *item; //элемент таблицы
        Cell *_table;
        int _count;
};

#endif // ARP_TABLE_H
