#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    
    int a, b;
    cin >> a >> b;
    long long dem = 0;

    for (int n = a; n <= b; n++){
        for (int i = 1; i * i <= n; i++){
            if (n % i == 0){
                int d1 = i - 1;
                if (d1 > 1 && n / d1 == n % d1){
                    dem++;
                }
                int u2 = n / i;
                if (u2 != i){
                    int d2 =  u2 - 1;
                    if (d2 > 1 && n / d2 == n % d2){
                        dem++;
                    }
                }
            }
        }
    }
    cout << dem;
    return 0;
}