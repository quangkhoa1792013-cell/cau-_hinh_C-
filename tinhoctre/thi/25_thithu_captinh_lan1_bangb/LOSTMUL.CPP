#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool check[100001];
    long long tich = 1;

    for (int x : a){
        check[x] = true;
    }

    for (int i = 0; i < m; i++) {
        if (check[i] == false){
            tich = (tich * i) % MOD;
            check[i] = true;
        }
    }

    cout << tich;
    return 0;
}