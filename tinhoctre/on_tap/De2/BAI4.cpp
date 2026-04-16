#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<long long> L(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
        L[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[i] >= a[j] + k){
                if (L[i] < L[j] + a[i]){
                    L[i] = L[j] + a[i];
                }
            }
        }
    }
    
    long long kq = 0;
    for (int i = 0; i < n; i++){
        if (L[i] > kq){
            kq = L[i];
        }
    }
    cout << kq;
    return 0;
}