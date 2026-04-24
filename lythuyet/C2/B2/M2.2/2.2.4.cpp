#include <iostream>
#include <string>
using namespace std;

int main(){
    const float PI = 3.14;
    float r;
    cout << "Nhap r: ";
    cin >> r;
    float C = 2 * PI * r;
    float S = (r * r) * PI;
    cout << "S: " << S << endl;
    cout << "C: " << C << endl;
    return 0;
}