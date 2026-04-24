#include <iostream>
#include <string>
using namespace std;

int main(){
    int dien;
    int tien = 0;
    cin >> dien;
    if (dien <= 50){
        tien = dien * 2000;
    }else if (dien > 50){
        tien = (50 * 2000) + (dien - 50) * 3000;
    }
    cout << tien;
    return 0;
}