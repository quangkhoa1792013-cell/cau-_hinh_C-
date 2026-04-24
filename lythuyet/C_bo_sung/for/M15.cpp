#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    long long c = 0;
    int n;
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n - 2; i++){
        c = a + b; // 0 + 1 = 1
        cout << c << " ";
        a = b; // a = 0 ma b = 1 => a = 1
        b = c; // b = 1 va c = 1 => b = 1
    }
    return 0;
}