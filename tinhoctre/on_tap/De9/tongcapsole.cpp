#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tongcapsole.INP", "r", stdin);

    int n;
    cin >> n;
    vector<int> a;

    for (int i = 1; i <= 2 * n - 1; i += 2){
        a.push_back(i);
    }

    int tong = 0;

    for (int i = 0; i < n; i++){
        tong += a[i];
    }
    cout << tong;
    return 0;
}