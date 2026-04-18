#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);

    long long a, b, c;
    cin >> a >> b >> c;
    vector<int> t;
    vector<long long> tam = {a, b, c};

    for (int i = 0; i < 3; i++){
        long long tong = 0;

        for (int j = 1; j * j <= tam[i]; j++){
            if (tam[i] % j == 0){
                tong += j;

                if (j * j != tam[i]){
                    tong += tam[i] / j;
                }
            }
        }

        t.push_back(tong);
    }

    cout << *max_element(t.begin(), t.end());
    return 0;
}