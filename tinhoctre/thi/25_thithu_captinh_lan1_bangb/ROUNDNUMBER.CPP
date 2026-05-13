#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    long long dem = 0;

    for (char x : s){
        if (x != '0'){
            dem++;
        }
    }

    if (dem == 1) cout << s;
    
    else{
        for (int i = 1; i < s.size(); i++) {
            s[i] = '0';
        }
        cout << s;
    }
    return 0;
}