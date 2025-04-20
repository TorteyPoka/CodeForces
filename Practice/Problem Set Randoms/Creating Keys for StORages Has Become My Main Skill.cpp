#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n, x;
	cin>>n>>x;
	vector<int>setBits;
	bitset<31>xx = x;
	int sum = 0;
	int stBit = __lg(x) + 1;
    map<int,int>ans;

	for(int i = 0; i<stBit; i++){
		if(xx[i] == 1){
			setBits.push_back(1 << i);
		}
	}

	ans[0] = 1, ans[x] = 1;

	for(int i =0; i<setBits.size(); i++){
		ans[setBits[i]] = 1;
		sum += setBits[i];
		ans[sum] = 1;
	}

	for(int i = 0; i<setBits.size(); i++){
		ans[sum - setBits[i]] = 1;
	}

	int cnt = 0;
	int alt = -1;
	map<int,int>freq;
	if(n < ans.size()){
		for(auto i : ans){
			if(cnt == n-1){
				alt = i.first;
				break;
			}
			cout << i.first << " ";
			freq[i.first] = true;
			cnt++;
		}
		if(freq[x - alt]){
			cout << alt << endl;
		}
		else
		 	cout << x << endl;
	}
	else{
		for(auto i : ans){
			cout << i.first << " ";
			cnt++;
		}
		for(int i = 1; i <= n-cnt; i++){
			cout << 0 << " ";
		}
		cout << endl;
	}
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}