#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<int> a(n);

    int tong = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            tong++;
    }

    if (tong == n)
    {
        cout << n - 1;
        return 0;
    }

    int max_l = 0, loi_tai = 0;

    for (int i = 0; i < n; i++)
    {
        int gt;
        if (a[i] == 0)
            gt = 1;
        else
            gt = -1;
        loi_tai += gt;
        if (loi_tai < 0)
            loi_tai = 0;
        if (loi_tai > max_l)
            max_l = loi_tai;
    }

    cout << tong + max_l;
    return 0;
}