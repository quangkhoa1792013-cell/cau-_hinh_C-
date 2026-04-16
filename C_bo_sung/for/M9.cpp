#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int so = 0;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){
            so++;
        }
    }
    cout << so;
    return 0;
}