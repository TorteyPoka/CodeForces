#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el
#define no cout << "No" << el

map<int,int> countmp(int* a, int n){
	map<int,int>mp;
	for(int i = 0; i<n; i++){
		mp[a[i]]++;
	}
	return mp;
}

/*----------X----------*//*


*/

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sq = 0 , pq = 0;
	for(int i = 0; i<n; i++){
		if(s[i] != '.'){
			if(s[i] == 'p')pq++;
			else sq++;
		}
	}
	if ((!pq or !sq) or (pq  == 1 and s[n - 1] == 'p') or (sq == 1 and s[0] == 's'))
        yes;
    else
    	no;
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