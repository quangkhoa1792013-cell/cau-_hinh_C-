#include <bits/stdc++.h>
using namespace std;

// ham tinh SNT
bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    freopen("BAI02.INP", "r", stdin);
    freopen("BAI02.OUT", "w", stdout);

    string s;
    cin >> s;

    for (char &x : s){
        if (!isdigit(x)){
            x = ' ';
        }
    }
    
    stringstream ss(s);
    int tam, max = 0;
    while (ss >> tam){
        if (isPrime(tam)){
            if (tam > 0){
                max = tam;
            }
        }
    }
    cout << max;
    return 0;
}