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
	int n;cin>>n;
	string s;
	cin>>s;
	vector<int>v;
	int k = 1, kk =  n;
	for(int i = n-2; i>=0; i--){
		if(s[i] == '<'){
			v.push_back(k++);
		}
		else v.push_back(kk--);
	}

	if(s[0] == '>')v.push_back(kk);
		else v.push_back(k);

	for(auto x : v)cerr << x << " ";
		cerr << el;
	for(int i = n-1; i>=0; i--){
		cout << v[i] << " ";
	}
	cout << el;

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