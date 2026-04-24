#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    string s = to_string(n);

    int dem = 0;

    for (char x : s){
        if (x % 2 != 0){
            dem++;
        }
    }

    cout << dem;
    return 0;
}