#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s = "";

    for (int i = 0; i < n; i++){
        char x;
        cin.get(x);
        s.push_back(x);
    }
    
    cout << s;
    return 0;
}