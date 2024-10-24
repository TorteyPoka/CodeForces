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

void crack()
{
    int n;
    cin >> n;
    if (n < 2020)
    {
        cout << "NO" << endl;
        return;
    }
    bool ok = true;
    while (n % 2020 != 0)
    {
        if(n < 2020){
            ok = false;
            break;
        }
        n -= 2021;
    }
    if(ok)cout << "YES" << endl;
    else cout << "NO" << endl;
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