#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    
    int i = 1; // Bắt đầu xét từ thằng thứ hai (a[1])
    
    while (i < n && a[i] == a[0]) {
        i++; // Nếu vẫn bằng thằng nhỏ nhất thì cứ bước tiếp
    }
    cout << a[i];
    return 0;
}