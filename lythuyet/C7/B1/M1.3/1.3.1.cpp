#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, x;
    getline(cin, s);
    getline(cin, x);

    if (s.find(x) != string::npos){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}