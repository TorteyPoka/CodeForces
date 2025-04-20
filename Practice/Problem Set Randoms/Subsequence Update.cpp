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
	2 2 2 3 4 5 6 8 9 10
	10 9 8 6 5 4 3 2 2 2

*/


void solve() {
	int n; cin>>n;
	int l , r;
	cin>>l>>r;
	int ar[n], br[n];
	for(int i = 0; i<n; i++){
		cin>>ar[i];
		br[i] = ar[i];
	}
	sort(br, br+r);
	int sum = 0;
	for(int i = 0; i<r - l + 1; i++){
		sum += br[i];
	}
	for(int i = 0; i<n; i++)br[i] = ar[i];
	sort(br+l-1, br+n);
	for(auto x : ar)cerr << x << " ";
		cerr << el;
	int usm = 0;	
	for(int i = l-1; i<r; i++){
		usm += br[i];
	}
	cerr << sum << " " << usm << el;
	cout << min(sum , usm) << el;
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