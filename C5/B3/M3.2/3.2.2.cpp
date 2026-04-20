#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        int minval = a[0][i];
        for (int j = 0; j < m; j++) {
            if (a[j][i] < minval){
                minval = a[j][i];
            }
        }
        cout << minval << " ";
    }
    return 0;
}