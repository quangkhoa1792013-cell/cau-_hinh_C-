#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // a la goi keo dau
    // b la goi keo cam
    // k la moi goi co so keo
    // x la so keo dau An da an 
    // y la so keo cam An da an 

    int a, b, k, x, y;
    cin >> a >> b >> k >> x >> y;

    int so_keo_dau = a * k;
    int so_keo_cam = b * k;
    int keo_dau_an = so_keo_dau - x;
    int keo_cam_an = so_keo_cam - y;

    cout << (ceil((double)keo_dau_an / 2)) + (ceil((double)keo_cam_an / 2));
    return 0;
}