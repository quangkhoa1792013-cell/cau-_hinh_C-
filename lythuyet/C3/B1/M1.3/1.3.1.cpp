#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n > 0){
        cout << "so duong";
    }else if (n < 0){
        cout << "so am";
    }else{
        cout << "so 0";
    }
    return 0;
}