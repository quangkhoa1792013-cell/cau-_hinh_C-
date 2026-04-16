#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    int tong = 0;
    while (n >= x){
        tong += x;
        x++;
    }
    cout << tong << endl;
    return 0;
}