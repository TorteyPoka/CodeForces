/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n, k;
    cin>>n>>k;
    vector<pair<int,int>>vp(n);
    int ar[n], br[n];
    for(int i = 0; i<n; i++)cin>>vp[i].first;
    for(int i = 0; i<n; i++)cin>>vp[i].second;
    sort(vp.begin(), vp.end())

}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}