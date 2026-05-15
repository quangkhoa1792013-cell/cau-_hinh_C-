#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long m, n, k;
    cin >> m >> n >> k;

    long long catdc = (m / k) * (n / k);

    long long S_cat_di = catdc * (k * k);

    cout << (m * n) - S_cat_di;
    return 0;
}