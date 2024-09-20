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

    map<int, int> mp_y_one;
    map<int, int> mp_y_zero;
    int both_lines_appearance = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (y == 1)
        {
            mp_y_one[x]++;
        }
        else
            mp_y_zero[x]++;

        if (mp_y_one[x] && mp_y_zero[x])
        {
            // cout << x << endl;
            both_lines_appearance++;
        }
    }

    int ans = both_lines_appearance * (n - 2);
    // cerr << ans << endl;

    // for(auto i : mp_y_one){
    //     cout << i.first << " " << i.second << " " << endl;
    // }
    // cout << endl;
    // for(auto i : mp_y_zero){
    //     cout << i.first << " " << i.second << " " << endl;
    // }
    // cout << endl;

    for (auto i : mp_y_one)
    {
        if (!i.second)
            continue;
        int x = i.first;
        // cerr << x << " ";
        if (mp_y_zero[x - 1] && mp_y_zero[x + 1])
            ans++;
    }

    for (auto i : mp_y_zero)
    {
        if (!i.second)
            continue;
        int x = i.first;
        // cerr << x << " ";
        if (mp_y_one[x - 1] && mp_y_one[x + 1])
            ans++;
    }
    // cerr << endl;

    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}