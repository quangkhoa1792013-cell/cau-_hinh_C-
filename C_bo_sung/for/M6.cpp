#include <iostream>
#include <string>
using namespace std;

int main(){
    int so = 100;
    int tong = 0;
    for (int i = 1; i <= so; i++){
        tong = tong + i;
    }
    cout << tong << endl;
    return 0;
}