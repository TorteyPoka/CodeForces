/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    bool possible = true;
    int cnt = 0;

    

    // if ((n % 3 == 0 and (n * 2) % 6 != 0) || n % 6 != 0)
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    if (n % 6 == 0)
    {
        while (n % 6 == 0)
        {
            n /= 6;
            if (n == 2)
            {
                possible = false;
                break;
            }
            cnt++;
        }
        if (possible)
            cout << cnt << endl;
        else
            cout << -1 << endl;
        return;
    }
    if (n % 3 == 0)
    {
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
            if (n == 2)
            {
                possible = false;
                break;
            }
            cnt++;
        }
        if (possible)
        {
            cout << cnt << endl;
        }
        else
            cout << -1 << endl;
    }
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}