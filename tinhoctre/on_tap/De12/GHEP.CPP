#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> a(4), b(4);

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
    }
    
    long long max_diem = a[0] * b[0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            long long now = a[i] * b[j];
            if (now > max_diem){
                max_diem = now;
            }
        }
    }

    cout << max_diem;
    return 0;
}