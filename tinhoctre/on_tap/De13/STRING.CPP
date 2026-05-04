#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    
    string s;
    cin >> s;

    string so = "";
    string chu = "";

    for (char x : s){
        if (isdigit(x)){
            so += x;
        }else{
            chu += x;
        }
    }
    
    reverse(chu.begin(), chu.end());
    sort(so.begin(), so.end());

    cout << chu << "\n";
    cout << so;
    return 0;
}