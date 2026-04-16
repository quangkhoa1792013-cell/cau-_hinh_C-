#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TANSUAT.INP", "r", stdin);
    freopen("TANSUAT.OUT", "w", stdout);

    int n;
    cin >> n;

    map<int, int> so;
    int x = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        so[x]++;
    }

    int max = 0;
    int res = 0;

    for (auto x : so){
        if (x.second > max){
            max = x.second;
            res = x.first;
        }
    }
    cout << res;
    return 0;
}