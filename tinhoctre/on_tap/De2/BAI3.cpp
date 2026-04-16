#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<long long>());

    long long tong = 0;
    for (int i = 0; i < n; i++){
        tong = tong + (a[i] * b[i]);
    }
    cout << tong;
    return 0;
}