#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 0;
    for (int i = 0; i < 10; i++){
        cin >> n; // n = 10, 9, 11;
        a = n; // n = 10 => a = 10;
        if (a > b){
            b = a;
        }
    }
    cout << b;
    return 0;
}