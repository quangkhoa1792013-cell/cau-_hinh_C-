#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= 100; i++){
        if (i % n == 0){
            cout << i << " ";
        }
    }
    return 0;
}