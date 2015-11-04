#include "string_table.h"

Cell::Cell()
{
    strcpy(ip,"");
    strcpy(mac,"");
    strcpy(type,"");
}

Cell::Cell(const Cell &_other)
{
    strcpy(ip, _other.ip);
    strcpy(mac, _other.mac);
    strcpy(type, _other.type);
}

Cell::~Cell()
{
}
