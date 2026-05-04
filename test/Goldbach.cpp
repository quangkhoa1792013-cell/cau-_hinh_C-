#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return true;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void Goldbach(long long n){
    for (int i = 2; i <= n/2; i++) {
        if (isPrime(i) && isPrime(n - i)){
            cout << n << " = " << i << " + " << n - i << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        Goldbach(a[i]);
    }

    return 0;
}