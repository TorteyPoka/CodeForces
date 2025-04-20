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
	string s, q;
	cin>>s>>q;
	vector<int>ss, qq;
	if(s[0] != q[0]){
		cout << "NO" <<el;
		return;
	}
	// cerr << s << " " << q << el;
	if(s.size() == 1){
		if(q.size() == 2){
			if(s[0] == q[0] and s[0] == q[1]){
				cout << "YES" <<el;
			}
			else cout << "NO" <<el;
		}
		else{
			if(s[0] == q[0]){
				cout << "YES" << el;
			}
			else cout << "NO" <<el;
		} 
		return;
	}
	if(q.size() == 1 and s.size()>=1){
		cout << "NO" <<el;
		return;
	}
	for(int i = 1; i<s.size(); i++){
		if(s[i] != s[i-1]){
			ss.push_back(i);
		}
	}
	if(ss[ss.size()-1] != s.size())ss.push_back(s.size());
	for(int i = 1; i<q.size(); i++){
		if(q[i] != q[i-1]){
			qq.push_back(i);
		}
	}
	if(qq[qq.size()-1] != q.size())qq.push_back(q.size());
	if(qq.size() != ss.size()){
		cout << "NO" << el;
		return;
	}
	int l1 = 0, l2 = 0;
	for(auto x : ss)cerr << x << " ";
		cerr << el;
	for(auto x : qq)cerr << x << " ";
		cerr << el;
	for(int i = 0; i<qq.size(); i++){
		if(((qq[i] - l2) < (ss[i] - l1)) or ((qq[i] - l2) > ((ss[i] - l1) * 2LL))){
			cout << "NO" << el;
			return;
		}
		l1 = ss[i];
		l2 = qq[i];
	}
	cout << "YES" << el;
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