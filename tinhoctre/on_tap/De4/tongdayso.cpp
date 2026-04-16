#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a;

    for (int i = 2; i <= n; i++){
        if (i % 2 == 0){
            a.push_back(i);
        }
    }

    int tong = 0;
    for (int i = 0; i < m; i++){
        tong += a[i];
    }

    cout << tong;
    
    return 0;
}