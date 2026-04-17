#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    s.insert(s.length() / 2, " - ");

    cout << s;
    return 0;
}