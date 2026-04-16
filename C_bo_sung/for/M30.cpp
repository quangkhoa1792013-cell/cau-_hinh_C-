#include <iostream>
#include <string>
using namespace std;

int main(){
    for (int i = 2; i <= 1000; i++){
        bool so = true;
        for (int j = 2; j*j <= i; j++){
            if (i % j == 0){
                so = false;
                break;
            }
        }
        if (so == true){
            cout << i << " ";
        }
    }
    return 0;
}