#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
    {
        return p1.second > p2.second;
    }
    else
        return p1.first < p2.first;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    int t = n;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    sort(vp.begin(), vp.end(), comp);
    // for (auto i : vp)
    //     cerr << i.first << " " << i.second << endl;
    // cerr << endl;
    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
    //     cerr << vp[i].first << " " << vp[i + 1].first << " " << vp[i].second << " " << vp[i + 1].second << endl;
        if (vp[i].first < vp[i + 1].first and vp[i].second > vp[i + 1].second)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}