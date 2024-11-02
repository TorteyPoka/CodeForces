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

void crack()
{
    int n;
    cin >> n;
    int ar[n];
    map<int, int> mp;
    for (int &i : ar)
    {
        cin >> i;
        mp[i]++;
    }
    int mxFreq = 0;
    for (auto i : mp)
    {
        mxFreq = max(mxFreq, i.second);
    }
    sort(ar, ar + n, greater<int>());
    int traitor = ar[0];
    int lastIdx = 0;
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (traitor >= ar[i] + ar[i + 1])
        {
            lastIdx = max(lastIdx, cnt);
            traitor = ar[i];
            cnt = 1;
            continue;
        }
        if (i == n - 2)
        {
            cnt += 2;
        }
        else
            cnt++;
    }
    if (cnt)
        lastIdx = max(lastIdx, cnt);

    if (traitor == ar[0])
        cout << 0 << endl;
    else
        cout << n - lastIdx << endl;

    for (auto i : ar)
        cerr << i << " ";
    cerr << endl;
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