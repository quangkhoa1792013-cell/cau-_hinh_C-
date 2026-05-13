#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("ARN.INP", "r", stdin);
    freopen("ARN.OUT", "w", stdout);
    
    string s, x;
    cin >> s >> x;

    int dem = 0;
    size_t found = s.find(x);

    while (found != string::npos){
        dem++;
        found = s.find(x, found + x.length());
    }

    cout << dem;
    return 0;
}