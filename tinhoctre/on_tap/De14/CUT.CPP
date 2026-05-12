#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CUT.INP", "r", stdin);
    freopen("CUT.OUT", "w", stdout);

    string s,p;
    cin >> s >> p;

    int dem = 0;
    size_t found = s.find(p);

    while (found != string::npos){
        dem++;
        found = s.find(p, found + p.length());
    }

    cout << dem;
    return 0;
}