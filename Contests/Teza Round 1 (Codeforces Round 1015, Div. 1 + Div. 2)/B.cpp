#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n;
	cin>>n;
	vector<int>vals(n);
	map<int,int>mp;
	int od = 0, ev =0;
	for(int i = 0; i<n; i++){
		cin>>vals[i];
		mp[vals[i]]++;
		if(vals[i] != 1){
			if(vals[i] % 2 == 0)ev++;
			else od++;
		}
	}
	sort(vals.begin(), vals.end());
	int mn = vals[0];
	if(mp[mn] > 1){
		cout << "YES" <<endl;
		return;
	}
	// if(mn == 1){	
	// 	if(od and ev){
	// 		cout << "Yes" <<endl;
	// 	}
	// 	else if (od){
	// 		bool ok = 0;
	// 		for(int i = 1; i<vals.size()-1; i++){
	// 			if(vals[i+1] % vals[i] != 0){
	// 				ok = false;
	// 				break;
	// 			}
	// 		}
	// 		if(ok)cout <<"Yes" << endl;
	// 		else cout << "No" <<endl;
	// 	}	
	// 	else cout << "NO" << endl;
	// 	return;
	// }
	vector<int>devs;
	for(auto x : mp){
		if(x.first == mn)continue;
		if(x.first % mn == 0)devs.push_back(x.first);
	}
	if(devs.size() < 2){
		cout << "No" <<endl;
		return;
	}
	int k = 0;
	for(int i = 0; i<devs.size(); i++){
		k = __gcd(k, devs[i]);	
	}
	if(k == mn)cout << "Yes" <<endl;
	else cout << "No" <<endl;
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