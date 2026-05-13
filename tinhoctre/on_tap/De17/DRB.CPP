#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DRB.INP", "r", stdin);
    freopen("DRB.OUT", "w", stdout);

    long long s1, v1, s2, v2;
    cin >> s1 >> v1 >> s2 >> v2;

    if (s1 > s2) {
        swap(s1, s2);
        swap(v1, v2);
    }

    if (v1 > v2){
        cout << abs((s1 - s2) / (v1 - v2));
    }else{
        cout << -1;
    }
    return 0;
}