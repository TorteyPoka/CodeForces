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

	9 * 1 = 09
	9 * 2 = 18
	9 * 3 = 27
	9 * 4 = 36
	9 * 5 = 45
	9 * 6 = 54
	9 * 7 = 63
	9 * 8 = 72
	9 * 9 = 81
	9 * 10 = 90

	80 + 9 
	89 + 9
	98 + 9
	107

	1000 + 9
	1009 + 9
	1018 + 9
	1027

	1000 + 99
	1099 + 99
	1198 + 99
	1297

	16 + 99
	115 + 99
	214 + 99
	313 + 99
	412 + 99
	511 + 99
	610 + 99
	709

	16 + 9
	25 + 9
	34 + 9
	43 + 9
	52 + 9
	61 + 9
	70

	999999999 + 16

	16+9
	25 + 99
	124 + 999
	1123 + 9999
	11122 + 99999
	111121 + 999999
	1111120 + 9999999
	1111119 + 99999999
	111111118 + 
	
	10 * 1000000000 = 1e10

*/

bool valid(int n){
	while(n > 1){
		int q = n%10;
		if(q == 7)return 1;
		n/=10;
	}
	return 0;
}

void solve() {
	int n;cin>>n;
	if(valid(n)){
		cout << 0 << endl;
		return;
	}
	string sn = to_string(n);
	int k = sn.size();
	int r = 1e9;
	int diff = 9;
	while(k){
		int l = 0;
		int p = n;
		while(!valid(p) and l < r){
			p+=diff;
			l++;
		}
		diff *= 10;
		diff += 9;
		r = min(r, l);
		k--;
	}
	cout << r << el;
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