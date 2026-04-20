#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int slsl, sldem, tong;

    slsl = n * (n + 1) / 2;
    sldem = (n + 1) / 2;
    tong = sldem * (sldem + 1) / 2;

    cout << slsl - tong;
    return 0;
}