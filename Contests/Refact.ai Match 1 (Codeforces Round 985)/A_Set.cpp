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

/*
    l = 4, r = 15
    r / l = 15 / 4 = 3
    1 - 8145 = 3
    1 - 332 = 3
    8145 - 332

*/

void crack()
{
    int l, r, k;
    cin >> l >> r >> k;
    if ((r / k) - (l - 1) < 0)
    {
        cout << 0 << endl;
    }
    else
        cout << (r / k) - (l - 1) << endl;
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