#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("FAIL.INP", "r", stdin);
    freopen("FAIL.OUT", "w", stdout);

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_f = -1;

    for (int x : a){
        if (x < k && x > max_f){
            max_f = x;
        }
    }

    cout << max_f;
    return 0;
}