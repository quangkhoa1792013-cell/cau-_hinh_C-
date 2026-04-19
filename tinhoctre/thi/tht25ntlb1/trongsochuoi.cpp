#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); // Tăng tốc
    int n;
    if (!(cin >> n)) return 0;
    
    double max_TB = -1.0;
    string ket_qua = "0";
    bool check_co_so = false;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        double tong = 0;
        int dem_so = 0;

        for (char x : s) {
            if (isdigit(x)) {
                tong += (x - '0');
                dem_so++;
            }
        }

        if (dem_so > 0) {
            check_co_so = true;
            double tb = tong / dem_so;
            if (tb > max_TB) {
                max_TB = tb;
                ket_qua = s;
            }
        }
    }

    if (!check_co_so) cout << 0;
    else cout << ket_qua;

    return 0;
}