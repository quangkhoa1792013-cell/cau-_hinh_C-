#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ATM.INP", "r", stdin);
    freopen("ATM.OUT", "w", stdout);

    int n, s;
    cin >> n >> s;
    vector<int> t(n);
    map<int, int> gia_tri;
    int tong = 0;

    if (n >= 20)
        return 0;

    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < (1 << n); i++)
    {
        long long tong = 0;
        vector<int> tui_tien;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                tong += t[j];
                tui_tien.push_back(t[j]);
            }
        }

        if (tong == s)
        {
            for (auto x : tui_tien){
                cout << x << " ";
            }
            return 0;
        }
    }

    return 0;
}