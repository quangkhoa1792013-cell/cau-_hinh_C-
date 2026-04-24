#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int kq = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            kq += i;
        }
    }
    if (n == kq){
        cout << "Day la so hoan hao";
    }else{
        cout << "Day ko phai la so hoan hao";
    }
    return 0;
}