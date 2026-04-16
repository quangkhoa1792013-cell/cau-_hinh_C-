#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        tong += 2 * i;
    }
    cout << tong;
    return 0;
}