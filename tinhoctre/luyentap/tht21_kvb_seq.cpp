#include <bits/stdc++.h>
using namespace std;

long long max_tong = -2e18;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int L = 0; L <= n; L++) {
        for (int R = L + 1; R <= n; R++) {
            if (a[L] == a[R]){
                long long tong_hien_tai = 0;

                for (int k = L; k <= R; k++) {
                    tong_hien_tai += a[k];
                }

                if (max_tong < tong_hien_tai){
                    max_tong = tong_hien_tai;
                }
            }
        }
    }

    cout << max_tong;
    return 0;
}