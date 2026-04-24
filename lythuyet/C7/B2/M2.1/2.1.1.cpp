#include <bits/stdc++.h>
using namespace std;

int main(){
    string tu_dai;
    getline(cin, tu_dai);
    stringstream loc(tu_dai);

    string tu;
    int dem = 0;

    while (loc >> tu){
        dem++;
    }
    cout << dem;
    return 0;
}