#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> a;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    if (!a.empty()){
        cout << *a.begin() << endl;
        cout << *a.rbegin() << endl;
    }
    return 0;
}