#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int vo = a * x;
    int but = b * y;

    cout << vo + but;
    return 0;
}