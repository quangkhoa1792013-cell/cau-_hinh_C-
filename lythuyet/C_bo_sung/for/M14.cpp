#include <iostream>
#include <string>
using namespace std;

int main(){
    long long tien = 0;
    int tong = 0;
    for (int i = 1; i <= 12; i++){
        cout << "Nhap thang [" << i << "]: "; 
        cin >> tien;
        tong += tien;
    }
    cout << tong;
    return 0;
}