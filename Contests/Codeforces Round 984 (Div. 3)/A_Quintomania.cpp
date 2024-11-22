
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
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(ar[i] - ar[i+1]);
        // cerr << x << " ";

        if (x != 5 and x != 7)
        {
            ok = false;
            break;
        }
    }
    // cerr << endl;
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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