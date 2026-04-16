#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 10 && n <= 20){
        cout << "Trong khoang";
    }else{
        cout << "ngoai khoang";
    }
    return 0;
}