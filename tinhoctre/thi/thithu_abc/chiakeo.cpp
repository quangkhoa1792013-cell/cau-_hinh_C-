#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k;
    cin >> k;
    long long keo = 2024;
    
    
    long long so_keo_dau = keo - k;
    
    if (so_keo_dau <= 0 || so_keo_dau % 2 != 0){
        cout << 0;
    }else{
        long long so_keo_chia = so_keo_dau / 2;
        if (so_keo_chia >= 1){
            cout << so_keo_chia;
        }else{
            cout << 0;
        }
    }

    return 0;
}