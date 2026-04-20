#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool check = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j){
                if (a[i][j] != 1) check = false;
            }else{
                if (a[i][j] != 0) check = true;
            }
        }
    }

    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}