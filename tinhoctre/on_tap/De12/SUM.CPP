#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long tong = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % k == 0){
            tong += a[i];
        }
    }

    if (tong == 0){
        cout << 0;
    }else{
        cout << tong;
    }
    return 0;
}