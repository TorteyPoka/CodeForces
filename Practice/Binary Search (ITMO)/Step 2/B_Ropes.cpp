#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int n, k;
vector<int> v;
bool good(double x)
{
    int totPieces = 0;
    for (int i = 0; i < n; i++)
    {
        totPieces += floor(v[i] / x);
    }
    return (totPieces >= k);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);

    cin >> n >> k;

    v.resize(n);
    for (int &i : v)
        cin >> i;

    double l = 0, r = 1e7 + 3;

    for (int i = 1; i <= 100; i++)
    {
        double mid = (r + l) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }

    cout << setprecision(20) << l << endl;

    return 0;
}