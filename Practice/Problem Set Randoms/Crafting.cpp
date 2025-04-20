#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el
#define no cout << "No" << el

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
	int ar[n],br[n];
	for(int i = 0; i<n; i++)cin>>ar[i];
	for(int i = 0; i<n; i++)cin>>br[i];
	int inv = 0, conv = INT32_MAX, cnt1 = 0, cnt2 = 0;
	set<int>cc;
	for(int i = 0; i<n; i++){
		if(ar[i] < br[i]) inv = (br[i] - ar[i]), cnt1 ++;
		else conv = min(conv, (ar[i] - br[i]));
	}
	if(cnt1 > 1 or inv > conv){
		no;
	}
	else yes;
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