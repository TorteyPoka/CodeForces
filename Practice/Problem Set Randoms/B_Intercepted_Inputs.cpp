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
    int k;
    cin >> k;
    map<int, int> mp;
    int n = k;
    while (k--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    n -= 2;
    int rt = sqrt(n);
    if (rt * rt == n)
    {
        int ct = mp[rt];
        if (ct > 1)
        {
            cout << rt << " " << rt << endl;
            return;
        }
    }
    if (mp[1] and mp[n])
    {
        cout << 1 << " " << n << endl;
    }
    else
    {
        for (int i = 2; i <= rt; i++)
        {
            if (n % i == 0)
            {
                if (mp[i])
                {
                    if (mp[n / i])
                    {
                        cout << i << " " << n / i << endl;
                        break;
                    }
                }
            }
        }
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