#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    while (n >= x){
        if (x % 2 == 0 && x <= n){
            cout << x << endl;
        }
        x++;
    }
    return 0;
}