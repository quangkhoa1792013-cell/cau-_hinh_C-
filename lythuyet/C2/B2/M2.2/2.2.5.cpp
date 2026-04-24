#include <iostream>
#include <string>
using namespace std;

int main(){
    const int MAX = 100;
    MAX = 200;
    /*
    error: assignment of read-only variable 'MAX'
    7 |     MAX = 200;
      |     ~~~~^~~~~

    Build finished with error(s).
    */
    return 0;
}