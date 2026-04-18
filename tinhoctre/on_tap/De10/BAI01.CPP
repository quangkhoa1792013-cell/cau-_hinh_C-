#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("BAI01.INP", "r", stdin);
    freopen("BAI01.OUT", "w", stdout);
    
    int r, a, b;
    cin >> r >> a >> b;

    int duong_kinh = r * 2;
    int duong_cheo = sqrt(pow(a, 2) + pow(b, 2));

    if (duong_kinh > duong_cheo){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}