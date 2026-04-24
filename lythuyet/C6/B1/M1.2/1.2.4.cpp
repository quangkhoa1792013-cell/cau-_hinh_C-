#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int BCNN = (a * b) / __gcd(a, b);
    cout << BCNN;
    return 0;
}