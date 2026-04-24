#include <bits/stdc++.h>
using namespace std;

int main(){
    string cau;
    getline(cin, cau);
    stringstream ss(cau);
    set<string> a;
    string word;

    while (ss >> word)
    {
        a.insert(word);
    }
    
    cout << a.size() << endl;

    for (string x : a){
        cout << x << " ";
    }
    return 0;
}