#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("TRIANGLE.INP", "r", stdin);
    freopen("TRIANGLE.OUT", "w", stdout);
    
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0;
    double p = 0;
    double s = 0;
    double max_S = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i] + a[j] > a[k] &&
                    a[i] + a[k] > a[j]&&
                    a[j] + a[k] > a[i]){
                        dem++;
                        p = (a[i] + a[j] + a[k]) / 2;
                        s = sqrt(p*(p - a[i])*(p - a[j])*(p - a[k]));
                        if (s > max_S){
                            max_S = s;
                        }
                    }
            }
        }
    }

    cout << dem << "\n";

    if (dem > 0){
        cout << fixed << setprecision(2) << max_S;
    }else{
        cout << -1;
    }

    return 0;
}