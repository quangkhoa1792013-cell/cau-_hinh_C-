#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long tong_lt = n * (n + 1) / 2;
    long long tong = 0;

    for (int i = 0; i < n - 1; i++){
        long long x;
        cin >> x;
        tong += x;
    }

    cout << tong_lt - tong;
    return 0;
}