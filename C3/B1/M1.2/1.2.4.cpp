#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n % 5 == 0){
        cout << "Chia het cho 5";
    }else{
        cout << "KO chia het cho 5";
    }
    return 0;
}