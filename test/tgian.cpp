#include <bits/stdc++.h>
using namespace std;

int main(){

    /*

    int x;
    cin >> x;
    
    
    int h = x / 60;
    int m = x % 60;

    cout << h << ":" << m;
    */

    int h, p;
    cin >> h >> p;

    int tgtoida = 135;
    int tonghp = h * 60 + p;

    tonghp += tgtoida;

    int hkt = (tonghp / 60) % 24;
    int pkt = tonghp % 60;

    cout << tonghp << endl;
    cout << hkt << ":" << pkt;
    
    return 0;
}