#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("hnoi2021_r1_tbs.INP", "r", stdin);
    freopen("hnoi2021_r1_tbs.OUT", "w", stdout);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double tich = a * b * c * d;

    if (tich > 0) cout << 1;
    else if (tich < 0) cout << -1;
    else if (tich == 0) cout << 0;

    return 0;
}