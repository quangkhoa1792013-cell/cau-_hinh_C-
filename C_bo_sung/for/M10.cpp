#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    long long S = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        S = S + (i * i);
    }
    cout << S;
    return 0;
}