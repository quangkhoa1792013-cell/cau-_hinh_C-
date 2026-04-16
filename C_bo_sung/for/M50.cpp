#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 3; // cao
    int m = 3; // rong
    for (int i = 1; i <= n; i++){ // vong lap chieu cao
        for (int j = 1; j <= m; j++){ // vong lap chieu rong
            if (i == 1 || i == n || j == 1 || j == m){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
    // bai nay thi de o cai tao hinh nhung ko bt khoet lo 
}