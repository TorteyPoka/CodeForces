#include<bits/stdc++.h>
using namespace std;
#define int long long	
#define test int T; cin>>T; while(T--)
#define PN 1000009

vector<bool>prime(PN, true);
vector<int>primes;
map<int,int>tPrimes;

//! Algo: Every prime squared numbers are T-Primes (Numbers with exacly 3 divisors);

void sieve()
{
	prime[0] = prime[1] = false; 
	for(int i = 2; i<=PN; i++)
	{
		if(prime[i]){
			primes.push_back(i);
			for(int j = i+i; j<=PN; j+=i)
				{
					prime[j] = false;
				}
		}
	}
	for(auto x : primes)
	{
		tPrimes[x*x]++;
	}
}


void solve()
{
	int n;
	cin>>n;

	if(tPrimes[n])
		cout << "YES" << endl;
	else cout << "NO" << endl;
	
}


// y n n

int32_t main()
{
	auto st  = clock();
	sieve();
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr); 
	test
	solve();
	cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
	return 0;
}