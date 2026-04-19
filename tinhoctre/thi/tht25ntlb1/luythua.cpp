#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int k;
    cin >> n >> k;

    for (int a = 1; a < k; a++){
        int b = k - a;
        if (pow(a, b) == n){
            cout << a << endl;
            cout << b;
            break;
        }
    }
    
    return 0;
}