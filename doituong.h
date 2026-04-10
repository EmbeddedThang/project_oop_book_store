#ifndef DOITUONG_H
#define DOITUONG_H
#include"Sach.h"
#include"Database.h"
#include"Data.h"
#include"hanhvi.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>   
#include <iomanip>
using namespace std;
class staff:public HanhVi{
    Database& db;
public:
    staff(Database &d);
    void quanli();
};
class customer:public HanhVi{
    Database &db;
public:
    customer(Database &d);
    void thuchienmua();
};
#endif