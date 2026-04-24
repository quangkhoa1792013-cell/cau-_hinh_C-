#include <iostream>
#include <string>
using namespace std;

int main(){
    int nhiet;
    cout << "Nhap nhiet do: ";
    cin >> nhiet;
    if (nhiet >= 30){
        cout << "Troi nang";
    }else{
        cout << "Troi mat";
    }
    return 0;
}