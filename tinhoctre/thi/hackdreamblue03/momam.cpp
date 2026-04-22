#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double S_max = pow(n ,2) / 16;
    cout << fixed << setprecision(3) << S_max;
    return 0;
}