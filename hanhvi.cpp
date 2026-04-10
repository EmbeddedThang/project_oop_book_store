#include"hanhvi.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>   
#include <iomanip>
HanhVi::HanhVi(Database &d) : db(d) {}
void HanhVi::Mua() {
    string tensach;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap ten sach muon mua: ";
    getline(cin, tensach);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0; i < (int)danhsach.size(); i++) {
        if (danhsach[i].getTen() == tensach) {
            timthay = true;
            cout << "\nThong tin sach: " << danhsach[i].getTen() << endl;
            cout << "Gia: " << fixed << setprecision(0) << danhsach[i].getGia() << " | Ton kho: " << danhsach[i].getSoLuong() << endl;
            if (danhsach[i].getSoLuong() <= 0) {
                cout << "Xin loi, sach nay hien da het hang!\n";
                return;
            }
            int slMua;
            cout << "Nhap so luong muon mua: ";
            cin >> slMua;
            if (slMua <= 0) {
                cout << "So luong mua khong hop le!\n";
            }
            else if (slMua > danhsach[i].getSoLuong()) {
                cout << "Khong du so luong trong kho! (Chi con " << danhsach[i].getSoLuong() << " cuon)\n";
            }
            else {
                int slMoi = danhsach[i].getSoLuong() - slMua;
                danhsach[i].setSoLuong(slMoi);
                double tongTien = slMua * danhsach[i].getGia();                    
                cout << "\n===== HOA DON XUAT =====\n";
                cout << "Ten sach: " << danhsach[i].getTen() << endl;
                cout << "So luong: " << slMua << endl;
                cout << "Don gia:  " << fixed << setprecision(0) << danhsach[i].getGia() << endl;
                cout << "------------------------\n";
                cout << "TONG TIEN: " << fixed << setprecision(0) << tongTien << " VND\n";
                cout << "Giao dich thanh cong! So luong ton kho da duoc cap nhat.\n";
            }
            break;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach co ten nay trong he thong!" << endl;
    }
}
void HanhVi::themsach() {
    Sach s;
    cout << "Nhap thong tin sach moi:\n";
    cin.ignore();
    s.input();
    vector<Sach>& ds = db.getDulieu();
    for (int i = 0; i < (int)ds.size(); i++) {
        if (ds[i].getTen() == s.getTen() && ds[i].getTacGia() == s.getTacGia()) {
            int sl = ds[i].getSoLuong() + s.getSoLuong();
            ds[i].setSoLuong(sl);
            cout << "Sach da duoc them\n";
            return;
        }
    }
    db.database_push(s);
    cout << "Da them sach moi!\n";
}
void HanhVi::timsachtheoten() {
    string tensach;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap ten sach can tim: ";
    getline(cin, tensach);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0;i < (int)danhsach.size();i++) {
        if (danhsach[i].getTen() == tensach) {
            cout << "Tim thay sach: ";
            cout << "Ten: " << danhsach[i].getTen() << endl;
            cout << "Tac gia: " << danhsach[i].getTacGia() << endl;
            cout << "Nam: " << danhsach[i].getNam() << endl;
            cout << "So luong: " << danhsach[i].getSoLuong() << endl;
            cout << "The loai: " << danhsach[i].getTheLoai() << endl;
            cout << "Gia: " << fixed << setprecision(0) << danhsach[i].getGia() << endl;
            timthay = true;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach!" << endl;
    }
}
void HanhVi::timsachtheotheloai() {
    string theloai;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap the loai can tim: ";
    getline(cin, theloai);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0;i < (int)danhsach.size();i++) {
        if (danhsach[i].getTheLoai() == theloai) {
            cout << "Tim thay sach: ";
            cout << "Ten: " << danhsach[i].getTen() << endl;
            cout << "Tac gia: " << danhsach[i].getTacGia() << endl;
            cout << "Nam: " << danhsach[i].getNam() << endl;
            cout << "So luong: " << danhsach[i].getSoLuong() << endl;
            cout << "The loai: " << danhsach[i].getTheLoai() << endl;
            cout << "Gia: " << fixed << setprecision(0) << danhsach[i].getGia() << endl;
            timthay = true;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach!" << endl;
    }
}
void HanhVi::timsachtheotacgia() {
    string tacgia;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap tac gia can tim: ";
    getline(cin, tacgia);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0;i < (int)danhsach.size();i++) {
        if (danhsach[i].getTacGia() == tacgia) {
            cout << "Tim thay sach: ";
            cout << "Ten: " << danhsach[i].getTen() << endl;
            cout << "Tac gia: " << danhsach[i].getTacGia() << endl;
            cout << "Nam: " << danhsach[i].getNam() << endl;
            cout << "So luong: " << danhsach[i].getSoLuong() << endl;
            cout << "The loai: " << danhsach[i].getTheLoai() << endl;
            cout << "Gia: " << fixed << setprecision(0) << danhsach[i].getGia() << endl;
            timthay = true;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach!" << endl;
    }
}
void HanhVi::xoasach() {
    string tensach;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap ten sach can xoa: ";
    getline(cin, tensach);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0;i < (int)danhsach.size();i++) {
        if (danhsach[i].getTen() == tensach) {
            danhsach.erase(danhsach.begin() + i);
            cout << "Da xoa sach!\n";
            timthay = true;
            break;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach!" << endl;
    }
}
void HanhVi::suagia() {
    string tensach;
    bool timthay = false;
    cin.ignore();
    cout << "Nhap ten sach can sua gia: ";
    getline(cin, tensach);
    vector<Sach>& danhsach = db.getDulieu();
    for (int i = 0;i < (int)danhsach.size();i++) {
        if (danhsach[i].getTen() == tensach) {
            double giagoc = danhsach[i].getGia();
            double giamoi;
            cout << "Gia cu: " << fixed << setprecision(0) << giagoc << endl;
            cout << "Nhap gia moi: ";
            cin >> giamoi;
            danhsach[i].setGia(giamoi);
            cout << "Da cap nhat!\n";
            timthay = true;
            break;
        }
    }
    if (!timthay) {
        cout << "Khong tim thay sach!" << endl;
    }
}