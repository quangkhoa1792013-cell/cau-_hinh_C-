#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int tong = 0;
    while (cin >> n && n != 0){
        if (n < 0){
            continue;
        }
        tong += n;
    }
    cout << tong;   
    return 0;
}