#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n;
    int so = 0;
    while (n > 0){
        so = so * 10 + (n % 10);
        n /= 10;
    }
    if (so == x){
        cout << "day la so doi xung";
    }else{
        cout << "day ko la so doi xung";
    }
    return 0;
}