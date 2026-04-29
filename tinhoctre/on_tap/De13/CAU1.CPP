#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);

    long long n;
    cin >> n;
    cout << (long long)n * (n + 1) * (n + 2) * (n + 3) / n;

    return 0;
}