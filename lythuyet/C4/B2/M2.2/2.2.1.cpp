#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int tong = 0;
    while (cin >> n && n != 0){
        tong += n;
    }
    cout << tong;
    
    return 0;
}