#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("PTDUYNHAT.INP", "r", stdin);
	freopen("PTDUYNHAT.OUT", "w", stdout);
	
	long long n;
	cin >> n;
	vector<int> a(n);
	map<int, int> count;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++){
		count[a[i]]++;
	}
	
	for (auto x : count){
		if (x.second == 1){	
			cout << x.first;
		}
	}
}