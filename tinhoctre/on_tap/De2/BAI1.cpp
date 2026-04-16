#include <bits/stdc++.h>
using namespace std;

int main(){
    de("BAI1.INP", "r", stdin);
    de("BAI1.OUT", "w", stdout);
    
    int n;
    cin >> n;
    int xe1 = 0;
    int xe2 = 0;

    if (n % 3 == 0) {
        xe1 = 0;
        xe2 = n / 3;
    } 
    else if (n % 3 == 1) {
        xe1 = 2;
        xe2 = (n - 4) / 3;
    } 
    else {
        xe1 = 1;
        xe2 = (n - 2) / 3;
    }
    
    cout << xe1 << " " << xe2;
    return 0;
}