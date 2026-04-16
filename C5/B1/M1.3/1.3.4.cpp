#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min = 0;
    int vi_tri = 0;
    for (int i = 0; i < n; i++){
        if (a[i] <= min){
            vi_tri = i;
            min = a[i];
        }
    }
    cout << min;
    return 0;
}