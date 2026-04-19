#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n = 1e6;
    cin >> n;

    long long sl = n/9;

    if (sl == 0){
        cout << 0;
    }
    long long m = sl * 9;

    long long tong = (9 + m) * sl / 2;
    
    cout << tong;
    return 0;
}