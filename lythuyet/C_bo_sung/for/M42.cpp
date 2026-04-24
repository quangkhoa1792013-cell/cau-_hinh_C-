#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 0;
    int a = 0;
    for (; n > 0; n /= 10){
        a = n;
        a %= 10;
        if (a > b){
            b = a;
        }
    }
    cout << b;
    return 0;
}