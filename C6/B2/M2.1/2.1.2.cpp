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

    cout << "so dau: " << a.front() << endl;
    cout << "so cuoi: " << a.back() << endl;
    return 0;
}