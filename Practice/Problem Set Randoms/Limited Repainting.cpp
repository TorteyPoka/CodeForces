#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

bool comp(pair<int,int>p1, pair<int,int>p2){
	return p1.first == p2.first ? p1.second < p2.second : p1.first > p2.first;
}

void solve() {
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int ar[n];
	for(int & i : ar)cin>>i;
	int pref[n+1];
	pref[1] = ar[0];
	for(int i = 1; i<n; i++){
		pref[i+1] = pref[i] + ar[i];
	}
	vector<pair<int,int>>penalty_seg;
	vector<pair<int,int>>seg;
	int b = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == 'B'){
			b++;
			continue;
		}
		if(b){
			penalty_seg.push_back({b, pref[i-1] - pref[max(0,i-1-b)]});
			seg.push_back({max(0, i-1-b), i-1});
			b = 0;
		}
	}
	sort(penalty_seg.begin(), penalty_seg.end(), comp);


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