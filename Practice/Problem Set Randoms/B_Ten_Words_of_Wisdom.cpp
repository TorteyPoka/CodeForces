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
    int mx = 0;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x <= 10)
        {
            if (mx < y)
            {
                ans = i;
                mx = y;
            }
        }
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