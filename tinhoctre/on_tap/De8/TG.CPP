#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("TG.INP", "r", stdin);
    freopen("TG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> p;
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        p.push_back(x);
    }

    int h_bat_dau = 480;
    
    for (int i = 0; i < n; i++){
        int tong = h_bat_dau + p[i];

        int gio = (tong / 60) % 24;
        int phut = tong % 60;

        if (gio < 10) cout << "0";
        cout << gio << ":";
        if (phut < 10) cout << "0";
        cout << phut << endl;
    }
}