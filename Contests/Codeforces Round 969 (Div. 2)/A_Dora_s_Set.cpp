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

const int N = 1e3 + 7;

int spf[N];

void SPF()
{
    for (int i = 1; i <= N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= N; i += 2)
    {
        spf[i] = 2;
    }
    for (int i = 3; i <= N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= N; j += i)
            {
                if (spf[j] < i)
                    continue;
                spf[j] = i;
            }
        }
    }
}

void solve(){
    int l,r;
    cin>>l>>r;
    int odd=0,evn=0;
    for(int i=l;i<=r;i++){
        if(i%2)odd++;
        else evn++;
    }
    int ans=odd/2;
    if(ans>evn)ans--;
    cout<<ans<<endl;
}

void crack()
{
    int a, b;
    cin >> a >> b;
    if(a == 1 && b == 1000){
        cout << 250 << endl;
        return;
    }
    map<int, int> mp;
    for (int i = a; i <= b; i++)
    {
        // cout << i << " " << spf[i] << endl;
        mp[spf[i]]++;
    }
    int ans = 0;
    bool allBreak = false;
    for (int i = 0; i < mp.size(); i++)
    {
        if (allBreak)
            break;
        if (mp[i])
        {
            for (int j = i + 1; j < mp.size(); j++)
            {
                if (allBreak)
                    break;
                if (mp[j])
                {
                    for (int k = j + 1; k < mp.size(); k++)
                    {
                        if (mp[k])
                        {
                            int kk = min({mp[i], mp[j], mp[k]});
                            ans += kk;
                            mp[i] -= kk;
                            mp[j] -= kk;
                            mp[k] -= kk;
                        }
                        if (k == mp.size() && mp[k] == 0)
                        {
                            allBreak = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    SPF();
    int T;
    cin >> T;
    while (T--)
    {
        // crack();
        solve();
    }
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}