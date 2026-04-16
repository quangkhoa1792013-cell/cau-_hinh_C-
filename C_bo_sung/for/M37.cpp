#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    int tong = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        tong += i;
    }
    cout << tong;
    return 0;
}