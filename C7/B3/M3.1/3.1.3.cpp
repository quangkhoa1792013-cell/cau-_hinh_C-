#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> a;

    for (char x : s){
        a.insert(x);
    }
    cout << a.size();
    
    return 0;
}