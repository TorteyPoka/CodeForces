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
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }
    int k = n;
    int ans = 0;
    while (k)
    {
        int mx = 0;
        for (int i = 0; i < k; i++)
        {
            int jj = n - k;
            for (int j = jj; j < n; j++)
            {
                int x = ar[i][j];
                if (i == j - jj and x < 0)
                {
                    mx = max(mx, abs(x));
                }
            }
        }
        ans += mx;
        k--;
    }
    k++;
    while (k < n)
    {
        int mx = 0;
        for (int i = k; i < n; i++)
        {
            int jj = n - k;
            for (int j = 0; j < jj; j++)
            {
                int x = ar[i][j];
                if (i - k == j and x < 0)
                {
                    mx = max(mx, abs(x));
                }
            }
        }
        ans += mx;
        k++;
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