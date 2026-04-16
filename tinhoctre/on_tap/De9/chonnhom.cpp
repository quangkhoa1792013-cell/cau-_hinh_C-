#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chonnhom.INP", "r", stdin);
    freopen("chonnhom.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> a;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    long long tong = 0;
    int L = 0, R = n - 1;
    
    for (int i = 0; i < n; i++){
        long long tich1 = (long long)a[R] * a[R-1] * a[R-2];
        long long tich2 = (long long)a[L] * a[L+1] * a[R];

        if (tich1 > tich2){
            tong += tich1;
            R -= 3;
        }else{
            tong += tich2;
            L += 2;
            R -= 1;
        }
    }
    return 0;
}