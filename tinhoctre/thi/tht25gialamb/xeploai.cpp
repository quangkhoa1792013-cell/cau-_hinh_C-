#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;

    double tong = 0.3 * a + 0.5 * b + 0.2 * c;

    if (tong >= 9.0){
        cout << "XUAT SAC";
    }else if (tong >= 8.0){
        cout << "GIOI";
    }else if (tong >= 6.5){
        cout << "KHA";
    }else if (tong >= 5.0){
        cout << "TRUNG BINH";
    }else if (tong < 5.0){
        cout << "YEU";
    }
    return 0;
}