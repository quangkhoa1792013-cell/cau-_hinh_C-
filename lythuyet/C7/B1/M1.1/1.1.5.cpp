#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    string tam = "";
    for (int i = 0; i < k; i++){
        tam += s;
    }

    cout << tam;
    return 0;
}