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
	int n;
	cin>>n;
	int ans = 1;
	if(n == 1)cout << 1 << el;
	else if(n <= 4){
		cout << 2 << el;
	}
	else{
		while(n > 1){
			ans++;
			n = (n-1)/2;
		}
		cout << ans << el;
	}
	// cout << k << el;	
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