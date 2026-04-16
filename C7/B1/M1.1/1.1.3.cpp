#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    if (s.length() > 0) s.pop_back();

    cout << s;
    return 0;
}