#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("GOOD.INP", "r", stdin);
    //freopen("GOOD.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long tong = 0;
    int left = 0, max_len = 0;

    for (int right = 0; right < n; right++){
        tong += a[right];

        while (tong > k){
            tong -= a[left];
            left++;
        }
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len;
    return 0;
}