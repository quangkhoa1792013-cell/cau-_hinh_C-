#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CAU2.INP", "r", stdin);

    string st;
    cin >> st;

    string st1 = "";
    for (char x : st){
        if (isdigit(x)){
            st1 += x;
        }
    }
    
    cout << st1;

    return 0;
}