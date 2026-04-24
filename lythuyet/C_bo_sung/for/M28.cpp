#include <iostream>
#include <string>
using namespace std;

int main(){
    float nam, tien_goc, lai_xuat;
    cin >> tien_goc >> lai_xuat >> nam;
    float tien = 0;
    float tien_lai = 0;
    for (int i = 1; i <= nam; i++){
        tien_lai = tien_goc * (lai_xuat / 100);
        tien = tien_goc;
        tien_goc += tien_lai;
        cout << "nam " << i << " voi lai xuat la: " << lai_xuat << "% " << " voi so tien goc la: " << tien << " va " << "so tien lai la: " << tien_lai << endl;
        cout << "Tong tien la: " << tien_goc << endl;
    }
    return 0;
}