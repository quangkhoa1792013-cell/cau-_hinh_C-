#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; 
    int tong = 0;
    int tam = 1;
    cin >> n;
    for (int i = 1; i <= n; i++){
        tam *= i;
        tong += tam;
    }
    cout << tong;
    return 0;
}