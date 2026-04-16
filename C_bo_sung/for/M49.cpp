#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int soNguoc = 0;
    cin >> n;
    for (int tam = n; tam > 0; tam /= 10){
        soNguoc = soNguoc * 10 + tam % 10;
    }
    if (soNguoc == n){
        cout << "day la so doi xung";
    }else{
        cout << "day ko la so doi xung";
    }
    return 0;
}