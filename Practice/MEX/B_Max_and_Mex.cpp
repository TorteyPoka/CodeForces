/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
// #define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    set<int> MEX, MAX;
    for (int i = 0; i <= n + 1; i++)
        MEX.insert(i);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        MAX.insert(ar[i]);
        if (MEX.find(ar[i]) != MEX.end())
            MEX.erase(ar[i]);
    }
    if(k == 0){
        cout << n << endl;
        return;
    }
    if (*MEX.begin() == n)
    {
        cout << k + n << endl;
        return;
    }
    if (n == 1)
    {
        if (ar[0] == 0)
        {
            cout << k + 1 << endl;
        }
        else if (ar[0] == 1)
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
        return;
    }
    if (*MEX.begin() == 0)
    {
        if (MAX.find(*MAX.rbegin() / 2) != MAX.end())
        {
            cout << n << endl;
        }
        else
            cout << n + 1 << endl;
        return;
    }
    while (k--)
    {
        int mex = *MEX.begin();
        int mx = *MAX.rbegin();
        // cerr << "MEX " << mex << " MX " << mx << endl;
        int x = mex + mx;
        if (x % 2 == 1)
            x = (x / 2) + 1;
        else
            x /= 2;
        cerr << x << endl;
        MAX.insert(x);
        if (MEX.find(x) != MEX.end())
            MEX.erase(x);
    }
    // for (auto i : MAX)
    //     cerr << i << " ";
    // cerr << endl;
    cout << MAX.size() << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}