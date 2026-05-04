#include <iostream>
using namespace std;

void ham_xa_rac() {
    int mang_rac[10];
    for(int i = 0; i < 10; i++) {
        mang_rac[i] = 8888; // "Nhet" so 8888 vao bo nho
    }
    cout << "Da xa rac xong!\n";
}

void ham_kiem_chung() {
    int mang_moi[10]; // Khong khoi tao, hy vong se trung dia chi voi mang_rac
    cout << "Kiem tra mang moi: ";
    for(int i = 0; i < 10; i++) {
        cout << mang_moi[i] << " "; 
    }
    cout << endl;
}

int main() {
    ham_xa_rac();
    ham_kiem_chung(); // Ong se thay so 8888 xuat hien o day!
    return 0;
}