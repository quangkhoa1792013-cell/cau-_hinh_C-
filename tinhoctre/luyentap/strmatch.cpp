#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n, m;
    cin >> n >> m;

    size_t found = n.find(m);
    long long dem = 0;

    while (found != string::npos){
        dem++;
        found = n.find(m, found + 1);
    }

    cout << dem;
    return 0;
}