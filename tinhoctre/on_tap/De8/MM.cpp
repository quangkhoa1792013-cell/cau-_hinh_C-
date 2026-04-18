#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("MM.INP", "r", stdin);
    freopen("MM.OUT", "w", stdout);

    string s;
    cin >> s;
    set<char> so;
    
    for (char &x : s){
        if (!isdigit(x)){
            x = ' ';
        }
    }
    
    stringstream ss(s);
    int tam;

    while (ss >> tam){
        so.insert(tam);
    }
    
    cout << so.size();

    return 0;
}