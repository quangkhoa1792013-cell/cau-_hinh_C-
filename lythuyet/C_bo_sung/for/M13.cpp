#include <iostream>
#include <string>
using namespace std;

int main(){
    int hang = 5;
    int cot = 5;
    for (int i = 1; i <= hang; i++){
        for (int a = 1; a <= cot; a++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}