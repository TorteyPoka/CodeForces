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
	int ar[n];
	for(int i = 0; i<n; i++)cin>>ar[i];
	map<int,int>mp = countmp(ar , n);
	bool ok = 1;
	for(auto [x, y] : mp)
	{
		if(y == 1){
			ok = 0;break;
		}
		while(y > 2){
			y--, mp[x+1]++;
		}
	}
	if(ok)yes;
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