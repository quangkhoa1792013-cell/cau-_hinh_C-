#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    vector<int> chan;
    vector<int> le;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            chan.push_back(a[i]);
        }
        if (a[i] % 2 != 0){
            le.push_back(a[i]);
        }
    }

    for (int i = 0; i < chan.size(); i++){
        cout << chan[i] << " ";
    }
    
    cout << endl;

    for (int i = 0; i < le.size(); i++){
        cout << le[i] << " ";
    }
    return 0;
}