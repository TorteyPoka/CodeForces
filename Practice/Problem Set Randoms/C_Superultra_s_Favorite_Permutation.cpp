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
    if (n <= 4)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 and i != 5)
            cout << i << " ";
    }
    cout << 5 << " " << 4 << " ";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0 and i != 4)
            cout << i << " ";
    }

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