#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    bool coHoa = false;
    bool coThuong = false;
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])) coHoa = true;
        if (islower(s[i])) coThuong = true;
    }

    if (coHoa && coThuong) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    
    return 0;
}