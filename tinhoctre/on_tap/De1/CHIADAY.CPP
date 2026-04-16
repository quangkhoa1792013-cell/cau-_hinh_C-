#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], tong = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        tong += a[i];
    }
    
    if (tong % 2 == 0){
        cout << "NO";
        return 0;
    }

    int target = tong / 2;
    bool dp[target + 1];
    
    return 0;
}