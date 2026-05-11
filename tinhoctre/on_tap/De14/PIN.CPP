#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
        x la so tien di duoi 500km
        y la so tien moi km phai tra them khi n > 500km
        n la so km da di

        neu nhu n > 500 thi phai tra them y dong moi km
    */

    freopen("PIN.INP", "r", stdin);
    freopen("PIN.OUT", "w", stdout);
    
    long long x, y, n;
    cin >> x >> y >> n;

    long long vuot = max(0LL, n - 500);
    long long tam = x + vuot * y;

    cout << tam;
    return 0;
}