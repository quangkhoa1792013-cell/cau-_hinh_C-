#include <bits/stdc++.h>
using namespace std;

int main(){
    string so;
    getline(cin, so);

    stringstream ss(so);
    int tam;
    int tong = 0;
    while (ss >> tam){
        tong += tam;
    }
    cout << tong;
    return 0;
}