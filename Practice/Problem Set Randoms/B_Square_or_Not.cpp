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
    string s;
    cin >> s;
    int r = sqrt(n);
    if (r * r != n)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < r; ++i)
    {
        if (s[i] != '1' || s[n - r + i] != '1')
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 1; i < r - 1; ++i)
    {
        if (s[i * r] != '1' || s[i * r + r - 1] != '1')
        {
            cout << "NO" << endl;
            return;
        }
        for (int j = 1; j < r - 1; ++j)
        {
            if (s[i * r + j] != '0')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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