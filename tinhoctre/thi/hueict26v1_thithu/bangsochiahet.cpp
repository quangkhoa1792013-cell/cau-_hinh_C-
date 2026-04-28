#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    long long dem = 0;
    for (long long i = 1; i <= n; i++)
    {
        // Tinh nhanh so luong so chia het cho k trong khoang [i+1, i+n]
        dem += (i + n) / k - i / k;
    }

    cout << dem;
    return 0;
}