#ifndef HANHVI_H
#define HANHVI_H
#include"Sach.h"
#include"Database.h"
#include"Data.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>   
#include <iomanip>
using namespace std;
class HanhVi{
private:
    Database& db;
public:
    HanhVi(Database &d);
    void Mua();
    void themsach();
    void timsachtheoten();
    void timsachtheotheloai();
    void timsachtheotacgia();
    void xoasach();
    void suagia();
};
#endif