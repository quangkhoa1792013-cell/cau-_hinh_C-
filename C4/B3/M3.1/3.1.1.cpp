#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    while (n >= x){
        if (x % 13 == 0){
            break;
        }
        cout << x << " ";
        x++;
    }
    return 0;
}