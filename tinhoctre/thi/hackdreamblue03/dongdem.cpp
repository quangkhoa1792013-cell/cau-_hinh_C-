#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int cnt5 = 0, cnt10 = 0;

    int so_khach = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 5){
            so_khach++;
            cnt5++;
        }else if (a[i] == 10){
            if (cnt5 > 0){
                cnt5--;
                cnt10++;
                so_khach++;
            }else break;
        }
        else if (a[i] == 20){
            if (cnt10 > 0 && cnt5 > 0){
                cnt5--;
                cnt10--;
                so_khach++;
            }else if(cnt5 >= 3){
                cnt5 -= 3;
                so_khach++;
            }else break;
        }
    }
    
    cout << so_khach;
    return 0;
}