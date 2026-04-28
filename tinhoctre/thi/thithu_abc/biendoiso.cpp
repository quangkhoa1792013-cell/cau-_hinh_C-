#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int k;
    cin >> s >> k;
    string a = s;

    for (char c = '0'; c <= '9'; c++) {
        s[s.size() - 1] = c;
        if (s % 3 == 0) {
            cout << s;
            return 0;
        }
    }

    cout << s;
    // du mia van chua hiue nhu nao de ma cho no ko bi qua nhi
    return 0;
}