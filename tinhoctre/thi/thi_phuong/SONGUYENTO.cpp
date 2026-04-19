#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    
    return true;	
}

int main() {
	freopen("SONGUYENTO.INP", "r", stdin);
	freopen("SONGUYENTO.OUT", "w", stdout);
	
    long long a;
    cin >> a;
    
    long long b = 1;
    
    while (!isPrime(a + b)) {
        b++;
    }
    
    cout << b;
    return 0;
}