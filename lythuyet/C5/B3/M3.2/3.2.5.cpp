#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int dem = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(a[i][j]) == true){
                dem++;
            }        
        }
    }

    cout << dem;
    return 0;
}