#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long tong = 0;
    for (int i = 0; i < n; i++) {
        if (i % 9 == 0){
            tong += i;
        }
    }

    cout << tong;
    return 0;
}