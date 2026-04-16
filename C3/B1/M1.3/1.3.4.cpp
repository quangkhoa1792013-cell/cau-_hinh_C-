#include <iostream>
#include <string>
using namespace std;

int main(){
    float h;
    cin >> h;
    if (h >= 1.7){
        cout << "cao";
    }else if (h >= 1.5){ // sai, phai can 1 toan tu j ma de so sanh 2 cai cung luc
        cout << "TB";
    }else{
        cout << "Thap";
    }
    return 0;
}