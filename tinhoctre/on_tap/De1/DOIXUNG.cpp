#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int so = n;
    int x = n;
    while (n >= 0){
        so = so * 10 + n % 10;
        n /= 10;
    }

    if (so == x){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}