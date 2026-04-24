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

    int x, y;
    cin >> x >> y;

    for (int i = 0; i < n; i++) {
        swap(a[x][i], a[y][i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}