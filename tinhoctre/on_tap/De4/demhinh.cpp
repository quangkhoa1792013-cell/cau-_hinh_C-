#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    long long tong = 0;

    for (int k = 1; k <= min(m, n); k += 2)
    {
        tong += (long long)(m - k + 1) * (n - k + 1);
    }
    cout << tong;
    return 0;
}