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
	int ar[n];
	int sum = 0;
	int bits[32] = {0};
	for(int i = 0; i<n; i++){
		cin>>ar[i];
		sum += ar[i];
		for(int k = 0; k<32; k++){
			if(ar[i] & (1 << k)){
				bits[k]++;
			}
		}
	}
	int xor_sum = 0;
	for(int i = 0; i<n; i++){
		int def = 0;
		for(int k = 0; k<32; k++){
			if(ar[i] & (1 << k)){
				def += (bits[k] * (1 << k));
			}
		}
		int sc = (n*ar[i]) + sum - (2 * def);
		xor_sum = max(xor_sum, sc);
	}
	cout << xor_sum << el;
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