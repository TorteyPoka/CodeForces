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
	cin>>n;
	int zr = 0;
	int m1 = 0, m2 = 0;
	int ar[n+1];
	for(int i = 1; i<=n; i++){
		cin>>ar[i];
	}
	for(int i = 1; i<=n; i++){
		if(ar[i] > 0){m1 = i;break;}
	}
	for(int i = n; i>=1; i--){
		if(ar[i] > 0){m2 = i;break;}
	}
	if(!m1 and !m2){
		cout << 0 << el;
	}
	else{
		for(int i = m1; i<=m2; i++){
			if(ar[i] == 0){
				zr = 1; break;
			}
		}
		if(zr){
			cout << 2 << el;
		}
		else cout << 1 << el;
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