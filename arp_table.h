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
        PMIB_IPNETTABLE table; //������� (��������� �� ���������)
        DWORD size; //������
        char mac[256];  //��� - �����
        char ip[256];   //IP - �����
        char type[30];  //��� ������
        Cell *item; //������� �������
        Cell *_table;
        int _count;
};

#endif // ARP_TABLE_H
