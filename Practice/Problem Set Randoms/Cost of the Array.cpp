#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el;
#define no cout << "No" << el;

map<int,int> countmp(int* a, int n){
	map<int,int>mp;
	for(int i = 0; i<n; i++){
		mp[a[i]]++;
	}
	return mp;
}

/*----------X----------*//*


*/


void solve() {
	int n, k;
	cin>>n>>k;
	vector<int>a(n+1), b;
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	b.push_back(0); //1-based
	if(n == k){
		for(int i = 2; i<=n; i+=2){
			b.push_back(a[i]);
		}
		b.push_back(0);
		for(int i = 1; i<=n; i++){
			if(b[i] != i){
				cout << i << el;
				return;
			}
		}
	}
	else{
		for(int i = 2; i <= n-k+2; i++){
			if(a[i] != 1){
				cout << 1 << el;
				return;
			}
		}
		cout << 2 << el;
	}
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}