//* Author: Sakhawat Hossain Mahin, CSE-28th, SMUCT
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


//! UNSOLVED


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, r;
    cin >> n >> r;
    vector<pair<int, int>> vp;
    vector<int> l, t;

    int T = 0;        //! points where magical potion has been used
    int referalR = r; //! tracking the potion working time
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        t.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        vp.push_back(make_pair(l[i], t[i]));
    }

    bool possible = 1;
    // int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a = vp[i].first, b = vp[i].second;
        if (a > b / 2)
        {
            if (a > b)
            {
                possible = 0;
                break;
            }
            while ((2 * a) > b)
            {
                // if (!ans)
                //     ans++;
                // a -= min(a, r);
                // b -= min(a, r);
                // referalR -= min(a, r);
                // T += min(a, r);
                // if (referalR <= 0 && a - min(a, r) > 0)
                //     ans++;

                if (ans.size() == 0)
                {
                    ans.push_back(T);
                }
                // cout << "a " << a << " b " << b << " ref " << referalR << " T " << T << endl;
                a -= min(a, referalR);
                b -= min(a, referalR);
                referalR -= min(a, referalR);
                T += min(a,referalR);
                if (referalR <= 0 && a - min(a, r) > 0)
                    ans.push_back(T);
            }
        }
    }

    if (possible)
    {
        // cout << ans << endl;
        // int fff = 0;
        // for(int i = 0; i<ans; i++)
        // {
        //     cout << fff << " ";
        //     fff+=r; 
        // }
        cout << ans.size() << endl;
        if (ans.size())
            for (auto x : ans)
                cout << x << " ";
    }
    else
        cout << -1 << endl;
    // for(auto I : vp)cout << I.first << " " << I.second << endl;

    return 0;
}