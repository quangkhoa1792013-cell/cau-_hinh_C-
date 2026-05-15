#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long x = n;
    long long tong = n;

    while (x > 0){
        x %= 10;
        tong += x;
        n /= 10;
        x = n;
    }

    cout << tong;
    return 0;
}