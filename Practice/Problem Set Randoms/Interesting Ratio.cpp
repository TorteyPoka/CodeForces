#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

const int N = 1e7 + 2;

bool prime[N] = {1};
vector<int>primes;

void sieve(){
	prime[0] = prime[1] = 0;
	for(int i = 2; i*i<=N; i++){
		if(prime[i]){
			primes.push_back(i);
			for(int mul = i*i; mul<=N; mul+=i){
				prime[mul] = 0;
			}
		}
	}
}
void solve() {
	int n;
	cin>>n;
	int cnt = 0;
	for(int i = 2; i<=n; i++){
		if(prime[i])cnt++;
	}
	for(int i = 2; i<=n; i++){
		cerr << prime[i] << " ";
	}
	cerr << endl;

	for(auto x : primes){
		if(x > n)break;
		for(int i = 2; i<=n/2; i++){
			if(prime[x*i])cnt++;
		}
	}
	cout << cnt << endl;
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	sieve();
	int T = 1, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}