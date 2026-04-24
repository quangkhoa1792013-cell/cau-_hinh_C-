#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s.substr(s.rfind(' ') + 1);
    return 0;
}