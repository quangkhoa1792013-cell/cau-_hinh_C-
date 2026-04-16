#include <iostream>
#include <string>
using namespace std;

int main(){
    float toan, van, anh;
    cin >> toan >> van >> anh;
    cout << "Diem TB 3 mon la: " << (toan + van + anh) / 3 << " Diem" << endl;
    return 0;
}