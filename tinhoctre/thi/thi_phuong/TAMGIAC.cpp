#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("TAMGIAC.INP", "r", stdin);
	freopen("TAMGIAC.OUT", "w", stdout);
	
    long long a, b;
    cin >> a;
    cin >> b;

    long long lower = abs(a - b);
    long long upper = a + b;

    long long count = upper - lower - 1;

    if (count < 0) count = 0;

    cout << count << endl;

    return 0;
}
