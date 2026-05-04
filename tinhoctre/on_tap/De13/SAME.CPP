#include <bits/stdc++.h>
using namespace std;

int dem[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("SAME.INP", "r", stdin);
    freopen("SAME.OUT", "w", stdout);

    long long n, x;
    cin >> n;
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        dem[x]++;

        if (dem[x] > max_val){
            max_val = dem[x];
        }
    }

    cout << max_val;
    return 0;
}