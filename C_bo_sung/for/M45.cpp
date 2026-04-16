#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 100; i <= 999; i++){
        int tong = 0;
        for (int j = i; j > 0; j /= 10){
            tong += j % 10;
        }
        if (tong == n){
            cout << i << " ";
        }
    }
    return 0;
}