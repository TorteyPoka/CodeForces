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
    int n;
    cin >> n;
    int ar[n];
    vector<pair<int,int>>vp;
    map<int,int>mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin>>x;
        mp[x]+=i;
    }
    int ans = 0;
    // for(int i = 1; i <= n; i++) cout << mp[i] << " ";
    // cout << endl;
    // for(auto x : mp)cout << x.first << " " << x.second << endl;
    map<int,int>remains;
    for(int i = 1; i <= n; i++){
        // cout <<"i - mp[i] : " <<abs(i - mp[i+1]) << endl;
        // cout << "i " << i << " mp[i] " << mp[i+1] << endl;
        if(abs(i - mp[i]) == 0)continue;
        remains[abs(i - mp[i])]++;  
    }
    for(auto x : remains) 
        ans = ans >= x.second ? ans : x.second;
    
    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}