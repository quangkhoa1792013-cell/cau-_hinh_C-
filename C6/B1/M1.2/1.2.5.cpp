#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int dau = abs(a[0]);
    int cuoi = abs(a[n - 1]);

    cout << dau - cuoi;
    return 0;
}