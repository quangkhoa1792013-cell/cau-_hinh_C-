#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    long long tong = 0;
    long long dem = 0;

    for (int i = 1; i < n; i++) {
        if (i % 2 != 0){
            tong += (i / 2 + 1);
        }else{
            tong += (n - (i / 2 - 1));
        }

        dem++;

        if (tong > k){
            cout << dem;
            return 0;
        }
    }
        cout << 0;
    return 0;
}