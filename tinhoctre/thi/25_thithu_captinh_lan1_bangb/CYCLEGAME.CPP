#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;

    long long res = (k + m - 2) % n + 1;

    cout << res;
    return 0;
}