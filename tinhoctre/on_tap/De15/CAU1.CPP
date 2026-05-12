#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);

    long long a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 4);

    long long S = a[0] * a[2];  

    cout << S;
    return 0;
}