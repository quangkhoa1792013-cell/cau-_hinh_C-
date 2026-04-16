#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 2;
    while (sqrt(n) >= x){
        if (n % x){
            cout << x << " ";
            break;
        }
        x++;
    }
    return 0;
}