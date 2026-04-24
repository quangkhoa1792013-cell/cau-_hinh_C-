#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int tong = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2){
        tong = tong + i;
    }
    cout << tong << endl;
    return 0;
}