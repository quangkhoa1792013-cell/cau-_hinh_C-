#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    a.pop_back();

    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}