#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int kq = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            kq += i;
        }
    }
    cout << kq << " ";
    return 0;
}