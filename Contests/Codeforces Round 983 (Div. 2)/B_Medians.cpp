#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test       \
    int T, tc = 0; \
    cin >> T;      \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
// #define int long long
/*------------X------------*/

/*

    1
    2 3 4
    5 6 7 8 9
    10
    11

    11
    10
    1 2 3 4 5 6 7 8 9

    11
    10
    9
    1 2 3 4 5 6 7 8

    1
    2
    3 4 5 6 7 8 9 10 11

    1 2 3 4 5 6 7 = 4
    8 = 8
    9 10 11 12 13 14 15 16 17 = 13
    4 8 13 = 8;

    17 15
    1 2 3 4 5 6 7 8 9 10 11 12 13 14
    15
    16 17

    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17

    5 4
    1 4 5

    7 5
    1 4 7
    1 2 3   4 5 6   7

    7 6
    1 6 7

    7 4
    1 4 5
    1 2 3   4   5 6 7

    7 3
    1 2 7
    1   2 3 4 5 6   7





*/

void crack()
{
    int n, k;
    cin >> n >> k;
    if (k == n || k == 1)
    {
        if (n == 1)
        {
            cout << 1 << endl
                 << 1 << endl;
        }
        else
            cout << -1 << endl;
        return;
    }
    cout << 3 << endl;
    if (k % 2 == 1)
    {
        cout << 1 << " " << k - 1 << " " << k + 2 << endl;
    }
    else
        cout << 1 << " " << k << " " << k + 1 << endl;
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