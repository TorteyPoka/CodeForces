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
	map<int,int>mp1, mp;
	for(int i = 1; i<= n; i++){
		int x;
		cin>>x;
		mp[x]++;
	}
	for(int i = 1; i<= n; i++){
		int x;
		cin>>x;
		mp1[x]++;
	}
	if((mp1.size() == 1 and mp.size() >= 3) or (mp1.size() == 2 and mp.size() >= 2) or mp1.size() >= 3){
		yes;
	}
	else no;

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