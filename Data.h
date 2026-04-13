#ifndef DATA_H
#define DATA_H
#include"Database.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>   
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
class Data{
    Database_Sach &ds;
    Database_Donhang &dh;
public:
    Data(Database_Sach &db,Database_Donhang &x);
    void Laydata(std::string filename);
    void xuatdata();
    void xuathoadon();
};
#endif