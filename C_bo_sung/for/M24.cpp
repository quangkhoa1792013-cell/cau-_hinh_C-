#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int be;
    if (a < b){
        be = a;
    }else{
        be = b;
    }
    for (int i = be; i >= 1; i--){
        if (a % i == 0 && b % i == 0){
            cout << i << " ";
            break;
        }
    }
    return 0;
}