#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n;
	cin >> n;
	int ar[n];
	set<int>fm, lm, rm, ans;
	for (int i = 1; i <= n + 1; i++)
	{
		lm.insert(i);
		rm.insert(i);
	}
	for (auto i : lm) {
		cerr << i << " ";
	}
	cerr << endl;
	bool freq[n+2] = {0};
	for (auto & i : ar) {
		cin >> i;
		if(freq[i])continue;
		freq[i] = 1;
		if(lm.find(i)!=lm.end())
		lm.erase(i);
		ans.insert(*lm.begin());
	}
	for (int i = n - 1; i >= 0; i--) {
		if (rm.find(ar[i]) != rm.end()) {
			rm.erase(ar[i]);
		}
		ans.insert(*rm.begin());
	}

	cerr << endl;
	int st = 0, en = n-1;
	for(auto i : ans)cerr << i << " ";
		cerr << endl;
	for(int i = 1; i<=n+1; i++)
		lm.insert(i);
	while (st <= en) {
		if(lm.find(ar[st]) != lm.end())
			lm.erase(ar[st]);
		if(lm.find(ar[en]) != lm.end())
			lm.insert(ar[en]);
		if(!lm.empty())
			ans.insert(*lm.begin());
		st++;
		en--;
	}
	for(auto i : ans)cerr << i << " ";
		cerr << endl;
	int mx = 1;
	for (auto i : ans) {
		// cerr << i << " ";
		if (i == mx)mx++;
		else break;
		// cerr << mx << endl;
	}
	cout << mx << endl;

}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	// cin >> T;
	for (; tc <= T; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}