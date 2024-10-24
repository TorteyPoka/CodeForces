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
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int &i : ar)
        cin >> i;
    sort(ar, ar + n);
    // for (auto i : ar)
    //     cerr << i << " ";
    // cerr << endl;
    int ans = n, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (ar[i] - ar[i - 1] > k) {
            ans = min(ans, n - cnt);
            cnt = 1;
        } else {
            cnt++;
        }
    }
    ans = min(ans, n - cnt);
 
    cout << ans << '\n';
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