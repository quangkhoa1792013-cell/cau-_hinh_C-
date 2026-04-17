#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    getline(cin, t);

    stringstream loc(t);
    string in;
    while (loc >> in)
    {
        cout << in << endl;
    }
    return 0;
}