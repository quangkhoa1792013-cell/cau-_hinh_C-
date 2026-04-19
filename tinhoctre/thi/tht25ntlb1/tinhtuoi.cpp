#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> x >> b;

    int tong_hien_tai = b - 2 * x;

    int tuoi_em = (tong_hien_tai - a) / 2;
    int tuoi_chi = (tong_hien_tai + a) / 2;

    cout << tuoi_em << "\n";
    cout << tuoi_chi << "\n";

    return 0;
}