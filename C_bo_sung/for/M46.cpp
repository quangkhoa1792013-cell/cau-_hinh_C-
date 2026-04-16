#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        bool snt = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                snt = false; 
            }
        }
        if (snt == true){
            cout << i << " ";
        }
    }
    return 0;
}