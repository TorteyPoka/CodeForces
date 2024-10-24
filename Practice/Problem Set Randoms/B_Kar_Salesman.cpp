#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

int n, x, sum;

int good(int n)
{
    return (n * x) >= sum;
}

void crack()
{
    cin >> n >> x;
    int ar[n];
    sum = 0;
    int mx = 0;
    for (int &i : ar)
    {
        cin >> i;
        mx = max(mx, i);
        sum += i;
    }
    /*
        1 1 1 1 14 1000
    */
    int l = 0, r = sum;
    while (r > l + 1)
    {
        int mid = (r + l) / 2;
        if (good(mid))
        {
            r = mid;
        }
        else
            l = mid;
    }
    cout << max(mx, r) << endl;
    /*

        tc 4 : n = 7, x = 4;
        2 5 3 3 5 2 5
    ar  2 2 3 3 5 5 5
    idx 1 2 3 4 5 6 7
    pfs 2 4 7 10 15 20 25

        tc 3 : n=5, x=3;
    ar  2 2 1 9 2
    id  1 2 2 2 9
    pf  1 3 5 7 16


    sum 59 , x = 5;
    (sum + x - 1 )/ x = (59+5-1)/5




    */
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        crack();
    }
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}