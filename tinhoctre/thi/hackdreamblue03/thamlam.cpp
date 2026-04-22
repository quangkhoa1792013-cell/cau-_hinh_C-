#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, x, y;
    cin >> n >> a >> x >> y;

    long long mua_ban_dau = n / a;
    long long tong_sua = mua_ban_dau;
    long long vo_chai = mua_ban_dau;
    while (vo_chai >= x)
    {
        long long sua_moi = (vo_chai / x) * y;
        tong_sua += sua_moi;
        vo_chai = (vo_chai % x) + sua_moi;
    }

    cout << tong_sua;
    return 0;
}