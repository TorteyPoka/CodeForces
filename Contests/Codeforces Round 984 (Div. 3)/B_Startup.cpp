#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test       \
    int T, tc = 0; \
    cin >> T;      \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}
void crack()
{
    int n, k;
    cin >> n >> k;
    map<int,int>mp;
    for(int i = 0; i<k; i++){
        int x, y;
        cin>>x>>y;
        mp[x] += y;
    }
    int l = mp.size();
    vector<int>ans;

    for(auto i : mp){
        ans.push_back(i.second);
    }

    sort(ans.begin(), ans.end(), greater<int>());
    int sum = 0;
    for(int i = 0; i<n and i<ans.size(); i++){
        sum += ans[i];
    }
    cout << sum << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        // cout << "Case " << ++tc << ": ";
        crack();
    }
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}