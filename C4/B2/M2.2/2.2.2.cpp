#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n;
    while (n > 0){
        x %= 10;
        cout << x;
        n /= 10;
        x = n;
    }
    return 0;
}