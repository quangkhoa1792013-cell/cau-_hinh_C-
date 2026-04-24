#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tong = 0;
    for (int i = 1; i <= n; i++){
        tong += i * (i + 1);
    }
    cout << tong;
    return 0;
}