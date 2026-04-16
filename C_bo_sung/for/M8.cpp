#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long GT = 1;
    for (int i = 1; i <= n; i++){
        GT *= i;
    }
    cout << GT;
    return 0;
}