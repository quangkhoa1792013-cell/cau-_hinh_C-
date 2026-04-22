#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    
    double p = (a + b + c) / 2;
    double S = sqrt(p*(p - a) * (p - b) * (p - c));
    vector<double> h(3);

    h[0] = (2.0 * S) / a;
    h[1] = (2.0 * S) / b;
    h[2] = (2.0 * S) / c;
    
    sort(h.begin(), h.end());

    cout << fixed << setprecision(4) << h[0] << " " << h[1] << " " << h[2];
    return 0;
}