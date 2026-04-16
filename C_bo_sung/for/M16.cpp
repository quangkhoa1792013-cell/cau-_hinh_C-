#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++){
        if (i != 5){
            cout << i << " ";
        }
    }
    return 0;
}