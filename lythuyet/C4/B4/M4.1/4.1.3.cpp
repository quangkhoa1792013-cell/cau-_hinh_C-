#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        bool test = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                test = false;
                break;
            }
        }
        if (test){
            cout << i << " ";
        }
    }
    return 0;
}