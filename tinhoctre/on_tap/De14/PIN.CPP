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
    
    int x, y, n;
    cin >> x >> y >> n;

    int tam = x;

    if (n > 500){
        for (int i = 0; i < n - 500; i++){
            tam += y;
        }
    }

    cout << tam;
    return 0;
}