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

bool comp(const pair<int,int>& p1, const pair<int,int>&p2){
    return p1.first > p2.first;
}

void crack()
{
    int n;
    cin >> n;
    int ar[n];
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        vp.push_back(make_pair(ar[i], i));
    }
    if (is_sorted(ar, ar + n))
    {
        int cnt = 1, cnt2 = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (ar[i] != ar[i + 1])
                break;
            cnt2++;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] != ar[i + 1])
            {
                break;
            }
            cnt++;
        }
        cout << min(n - cnt, n - cnt2) << endl;
        return;
    }
    sort(vp.begin(), vp.end(), comp);
    int sub = 0;
    int ans  = 0;
    // for(int i = 0; i<n-1; i++){
    //     if(ar[i] < ar[i+1]){
    //         ans++;
    //     }
    //     else break;
    // }
    int cnt = 1;
    for(int i = n-2; i>=0; i--){
        if(ar[i] < ar[i+1]){
            break;
        }
        cnt++;
    }
    ans = min(ans , n - cnt);
    
    // for(auto i : vp)cerr << i.first << " " << i.second << endl;
    // cerr << endl;

    for (int i = 0; i < vp.size() - 1; i++)
    {
        int cnt = 0;
        for(int k = vp[i].second; k < n; k++){
            if(ar[k] > vp[i].first){
                cnt++;
            }
        }
        ans = min(vp[i].second + cnt , ans);
    }

    cout << ans << endl;
}

int_fast32_t main()
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