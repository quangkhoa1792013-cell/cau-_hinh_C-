#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    int du = 0;
    cin >> a >> b;
    while (a != b){
        du = a % b;
        a = b;
        b = du;
    }
    cout << a;
    return 0;
}