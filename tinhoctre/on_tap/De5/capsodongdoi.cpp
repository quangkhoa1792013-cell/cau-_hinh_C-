#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dem = 0;

    for (int a = 1; a < n; a++){
        int b = n - a;
        if (a % b == 0 || b % a == 0){
            dem++;
            cout << "(" << a << ", " << b << ")" << ", ";
        }
    }
    cout << endl;

    cout << dem;
    return 0;
}