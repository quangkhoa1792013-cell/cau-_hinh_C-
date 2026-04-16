#include <iostream>
#include <string>
using namespace std;

int main(){
    int tuoi;
    cin >> tuoi;
    if (tuoi >= 18){
        cout << "Du tuoi bau cu";
    }else {
        cout << "Ko du tuoi bau cu";
    }
    return 0;
}