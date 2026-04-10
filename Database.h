#ifndef DATABASE_H
#define DATABASE_H
#include"Sach.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
class Database{
private:
    vector<Sach> dulieu;
    vector<int>  madonhang;
public:
    void database_push(Sach s);
    void database_show();
    int getSizedatabase();
    vector<Sach>& getDulieu();
    void database_push_donhang(int x);

};
#endif