#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            dem++;
        }
    }
    if (dem == 2){
        cout << "Day la 1 so nguyen to" << endl;
    }else{
        cout << "Day ko phai la 1 so nguyen to";
    }
    return 0;
}