#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n;
    int b = 0;
    bool dk = true;
    for (; n >= 0; n /= 10){
        if (a > b){
            b = a;
        }else{
            dk = false;
        }
    }
    if (dk == true){
        cout << "so do theo tt tang dan";
    }else if (dk == false){
        cout << "so do ko theo tt tang dan";
    }
    return 0;
}