#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int diem = 0;

    for (int i = 0; i < n; i++){
        if (i < 10){
            diem += 2;
        }else if (i >= 10){
            diem += 2+3;
        }
    }

    cout << diem;
    return 0;
}