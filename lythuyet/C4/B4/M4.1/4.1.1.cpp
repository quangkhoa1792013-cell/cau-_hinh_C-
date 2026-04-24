#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    return 0;
}