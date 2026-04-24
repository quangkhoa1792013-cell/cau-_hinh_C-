#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong = 0;
    int a = 0;
    int b = 1;
    int tam = 0;
    for (int i = 0; i <= n; i++){
        tam = a + b;
        a = b;
        b = tam;
        tong += tam;
    }
    cout << tong;
    return 0;
}