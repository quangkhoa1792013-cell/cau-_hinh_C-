#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tamgiac.INP", "r", stdin);

    int n, k;
    cin >> n >> k;
    vector<int> a;
    int L = 0;
    int R = n - 1;
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}