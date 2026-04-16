#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chienrobot.INP", "r", stdin);

    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    // in thu
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    int dem = 0;
    // in thu va kiem tra
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((a[i] + a[j]) % 2 == 0){
                cout << "(" << a[i]<< ", " << a[j] << "), ";
                dem++;
            }
        }
    }
    cout  << endl << dem;
    return 0;
}