#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = 0;
    int vi_tri = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            vi_tri = i;
            max = a[i];
        }
    }
    cout << max << endl << vi_tri;
    return 0;
}