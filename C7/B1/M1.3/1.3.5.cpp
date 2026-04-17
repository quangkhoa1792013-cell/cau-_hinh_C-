#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b;
    cin.ignore();
    getline(cin, s);

    cout << s.substr(a, b);
    
    return 0;
}