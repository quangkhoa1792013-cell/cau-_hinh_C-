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

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << setw(2) << a[i][j] << " ";
        }
    }
    return 0;
}