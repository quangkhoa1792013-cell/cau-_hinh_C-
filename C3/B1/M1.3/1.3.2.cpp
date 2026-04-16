#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << "a lon hon b";
    }else if (a < b){
        cout << "a nho hon b";
    }else{
        cout << "a bang b";
    }
    return 0;
}