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
	min sq = 4 or ///
	88 % 4 == 0
	88 / 4 = 22
	 


*/
int d;
bool good(int x){
	int g = d+(x*x);
	int r = sqrt(g);
	return (r * r == g);
}
void solve() {	
	cin>>d;
	if(d % 2){
		cout << d/2 << " " << d/2 + 1<< el;
	}
	else if(d % 4 == 0){
		cout << d/4 - 1 << " " << d/4 + 1 << el;
	}
	else cout << "impossible" << el;
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	// cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}