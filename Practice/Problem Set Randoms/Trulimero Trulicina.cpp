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
	1
	2

*/
void solve() {
	int n, m, k;
	cin>>n>>m>>k;
	int freq[4] = {0};
	int grid[n][m];
	bool alt = 0;
	if(n % k == 0 or m%k == 0){
		alt = 1;
	}
	int x = 1;
	for (int i = 0; i < n; ++i) {
        int shift = i % k;
        for (int j = 0; j < m; ++j) {
        	if(alt)
            	grid[i][j] = (shift + j) % k + 1;
        	else{
        		grid[i][j] = x++;
        		if(x > k)x=1;
        	} 
        }
    }
    for(int i = 0; i<n; i++){
    	for(int j = 0; j<m; j++){
    		cout << grid[i][j] << " ";
    	}
    	cout << el;
    }
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