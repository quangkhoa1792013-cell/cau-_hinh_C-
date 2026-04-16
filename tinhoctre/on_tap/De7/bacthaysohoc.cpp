#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("bacthaysohoc.INP", "r", stdin);

    int n;
    cin >> n;
    vector<int> k;
    vector<int> so_ganh;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        k.push_back(x);
    }

    int dem = 0;

    for (int i = 1; i < n - 1; i++){
        if (k[i] > k[i + 1] && k[i] > k[i - 1]){
            so_ganh.push_back(k[i]);
            dem++;
        }
    }

    
    if (dem == 0){
        cout << "-1";
    }else{
        sort(so_ganh.begin(), so_ganh.end());
        cout << dem << endl;
        cout << so_ganh[0] << endl;
    }
    return 0;
}