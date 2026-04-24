#include <iostream>
#include <string>
using namespace std;

int main()
{
    int thang;
    cin >> thang;
    if (thang == 1 || thang == 2 || thang == 3)
    {
        cout << "Mua Xuan";
    }
    else if (thang == 4 || thang == 5 || thang == 6)
    {
        cout << "Mua Ha";
    }
    else if (thang == 7 || thang == 8 || thang == 9)
    {
        cout << "Mua Thu";
    }
    else if (thang == 10 || thang == 11 || thang == 12)
    {
        cout << "Mua Dong";
    }
    return 0;
}