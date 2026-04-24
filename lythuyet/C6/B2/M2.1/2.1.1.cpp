#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int temp;
    while (cin >> temp && temp != 0){
        a.push_back(temp);
    }

    cout << a.size();
    return 0;
}