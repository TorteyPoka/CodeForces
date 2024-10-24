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
const int MOD = 998244353;

void crack()
{
    set<int> mex;
    int n;
    cin >> n;
    int ar[n];
    int freq[n + 1];
    for (int i = 0; i <= n; i++)
        mex.insert(i);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        freq[ar[i]]++;
        if (mex.find(ar[i]) != mex.end())
            mex.erase(ar[i]);
    }
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