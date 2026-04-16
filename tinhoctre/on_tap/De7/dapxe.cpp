#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("dapxe.INP", "r", stdin);

    int n;
    cin >> n;
    vector<int> k;
    int tong = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        k.push_back(x);
        tong += k[i];
    }

    int dem = 0;
    double TB = (double)tong / n;

    for (int i = 0; i < n; i++){
        if (k[i] > TB){
            dem++;
        }
    }

    // ham sap xep tu be - lon
    sort(k.begin(), k.end(), greater<int>());

    // dong in so lon nhat
    cout << k[0] << endl;
    // dong in TB
    cout << fixed << setprecision(1) << TB << endl;
    // dong in so gio vuot muc
    cout << dem << endl;
    return 0;
}