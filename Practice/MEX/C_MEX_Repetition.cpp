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
    int n, k;
    cin >> n >> k;
    int ar[2*n];
    set<int> mex;
    for (int i = 0; i <= n; i++)
    {
        mex.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (mex.find(ar[i]) != mex.end())
        {
            mex.erase(ar[i]);
        }
    }
    ar[n] = *mex.begin();

    for (int i = 1; i <= n; i++)
    {
        ar[n+i] = ar[i-1];
    }
    // for(auto i : all)cerr << i << " ";
    // cerr << endl;
    k--;
    k %= n + 1;
    int idx = n-k;
    while(n--)
    {
        cout << ar[idx] << " ";
        idx++;
    }
    // for (int i = 0; i < n - k - 1; i++)
    //     cout << ar[i] << " ";
    cout << endl;
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