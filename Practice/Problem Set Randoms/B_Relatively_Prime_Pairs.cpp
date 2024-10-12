/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << ' ' << i + 1 << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}