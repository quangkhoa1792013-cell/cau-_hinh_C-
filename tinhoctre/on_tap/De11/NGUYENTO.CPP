#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

long long daoNguocSo(long long n) {
    int dao = 0;
    while (n > 0) {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dao;
}

bool SDB (long long n){
    if (isPrime(n) == false) return false;
    long long dao = daoNguocSo(n);

    if (isPrime(dao) == true) return true;
    else return false;
}

int main(){
    freopen("NGUYENTO.INP", "r", stdin);
    freopen("NGUYENTO.OUT", "w", stdout);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    for (int i = 0; i < q; i++){
        int diem = 0;
        int L, R;
        cin >> L >> R;
        for (int j = L; j <= R; j++){
            if (SDB(a[j - 1])){
                diem++;
            }
        }
        cout << diem << endl;
    }

    return 0;
}