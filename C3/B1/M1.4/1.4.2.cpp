#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c){
        cout << "Tam Giac deu";
    }else{
        cout << "Khong phai tam giac deu";
    }
    return 0;
}