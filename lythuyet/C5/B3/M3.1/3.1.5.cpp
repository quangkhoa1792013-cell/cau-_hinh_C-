#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int m, n;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    int maxVal = a[0][0];
    int xmax = 0, ymax = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > maxVal){
                maxVal = a[i][j];
                xmax = i;
                ymax = j;
            }
        }
    }
    
    cout << maxVal << endl;
    cout << xmax << " " << ymax;
    return 0;
}