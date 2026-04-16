#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    bool kq = true;
    cin >> n;
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            break;
        }
    }
    if (kq == true){
        cout << "Day la so chinh phuong";
    }else   {
        cout << "Day ko phai la so chinh phuong";
    }
    return 0;
}