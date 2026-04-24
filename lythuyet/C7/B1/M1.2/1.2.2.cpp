#include <bits/stdc++.h>
using namespace std;

int main(){
    string chu_so;
    int dem_so = 0;
    int dem_chu = 0;

    cin >> chu_so;

    for (int i = 0; i < chu_so.size(); i++){
        if (isalpha(chu_so[i])) dem_so++;
        if (isdigit(chu_so[i])) dem_chu++;
    }

    cout << dem_chu << endl;
    cout << dem_so;
    return 0;
}