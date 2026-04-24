#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n;
    int tong = 0;
    while (n > 0){
        x %= 10;
        tong += x;
        n /= 10;
        x = n;
    }
    cout << tong;
    return 0;
}