#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    size_t pos = s.find("apple");

    s.replace(pos, 5, "orange");
    cout << s;
    return 0;
}