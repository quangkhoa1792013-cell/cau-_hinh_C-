#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, int> dem;

    for (int i = 0; i < n; i++){
        int x; 
        cin >> x;
        dem[x]++;
    }

    cout << dem[5];
    return 0;
}