#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dem = 0;
    int luu = n;
    for (int i = n; i > 0; i /= 10){
        dem++;
    }
    cout << dem;
    return 0;
}