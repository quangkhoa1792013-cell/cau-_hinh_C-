#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI03.INP", "r", stdin);
    freopen("BAI03.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> s(n);
    map<int, int> m;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    s[0] = a[0];
    
    for (int i = 0; i < n; i++){
        s[i] = s[i - 1] + a[i]; 
    }

    long long max_tong = -2e18;
    for (int i = 0; i < n; i++){
        if (m.count(a[i])){
            int h = m[a[i]];
            int r = i;
            long long tong;
            if (h == 0) tong = s[r];
            else tong = s[r] - s[h - 1];
            if (tong > max_tong) max_tong = tong;
        }else{
            m[a[i]] = i;
        }
    }

    cout << max_tong;
    return 0;
}