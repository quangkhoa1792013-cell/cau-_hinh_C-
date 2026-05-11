#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("FAIL.INP", "r", stdin);
    freopen("FAIL.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> tam;

    for (int x : a){
        if (x < k){
            tam.push_back(x);       
        }
    }

    if (tam.size() == 0){
        cout << -1;
    }else{
        auto it = max_element(tam.begin(), tam.end());
        cout << *it;
    }

    return 0;
}