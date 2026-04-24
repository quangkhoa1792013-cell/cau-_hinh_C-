#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 2) return false;
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[100][100];
    int b[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(a[i][j])) b[i][j] = 1;
            else b[i][j] = 0;
        }
    }
    
    return 0;
}