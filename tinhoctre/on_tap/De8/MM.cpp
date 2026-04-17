#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("MM.INP", "r", stdin);
    freopen("MM.OUT", "w", stdout);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (!isdigit(s[i])) s[i] = ' ';
    }
    
    return 0;
}