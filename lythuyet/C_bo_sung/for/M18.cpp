#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    float S = 0;
    for (int i = 1; i <= n; i++){
        S += (1.0 / i);
    }
    cout << S;
    return 0;
}