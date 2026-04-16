#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];    
    }

    for (int i = 0; i < n; i++){
        bool check = true;

        if (a[i] < 2){
            check = false;
        }else{
            for (int j = 2; j <= sqrt(a[i]); j++){
                if (a[i] % j == 0){
                    check = false;
                    break;
                }
            }
        }
        if (check == true){
            cout << a[i] << endl;
        }
    }
    return 0;
}