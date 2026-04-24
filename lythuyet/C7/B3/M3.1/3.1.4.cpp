#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    set<int> s;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.count(x) > 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}