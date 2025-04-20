#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*//*
	99 2 86 33 14 77
	2 14 33 77 86 99
	2 - 14 + 33 - 77 + 86 - 99 = -69
	2 - 14 + 33 - 77 + 86 - 99 + 69

	7
	99 - 86 + 77 - 42 + 33 - 14 + 2

	
	1 6 3 2
	1 2 3 6
	1 - 2 + 3 - 6
*/


void solve() {
	int n;
	cin>>n;
	bool op = true; //false = (-)
	int num = 0;
	vector<int>v;
	for(int i = 0; i<2*n; i++)
	{	
		int x;
		cin>>x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int ff = v.back();
	cout << ff << " ";
	v.pop_back();

	for(int x = 0; x < n*2-2; x++){
		cout << v[x] << " ";
		(op ? num += v[x] : num -= v[x]);
		op = !op;
	}

	if(num + v.back() > ff){
		cout << v.back() << " " << num+v.back() - ff << endl;
	}
	else cout << ff - (num - v.back()) << " " << v.back() << endl;
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