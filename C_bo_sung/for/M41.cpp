#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int uoc = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (i % 2 != 0){
                cout << i << " "; 
            }
        }
    }
    return 0;
}