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
    long long k;
    cin >> n >> k;
    vector <int> a, b;
    
    if (n <= 60 and (1ll << (n - 1)) < k) {
        cout << -1 << endl;
        return;
    }
    k--;
    vector <int> v;
    while (k) {
        v.push_back(k % 2);
        k /= 2;
    }
    while (v.size() < n - 1) v.push_back(0);
    int kk = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] == 0) a.push_back(kk);
        else b.push_back(kk);
        kk++;
    }
    
    reverse(b.begin(),b.end());

    for (auto i : a) cout << i << " ";
    	cout << n << " ";
    for (auto i : b) cout << i << " ";
    
    cout << endl;
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