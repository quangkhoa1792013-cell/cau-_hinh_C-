#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long s = ((n - 1)*n*(n + 1)*(n+2)) / 4;
    cout << s;
    return 0;
}