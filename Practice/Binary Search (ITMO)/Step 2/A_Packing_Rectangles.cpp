/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// @author: TorteyPoka

int a, b, n;

int good(int x)
{
    return (x / a) * (x / b) >= n;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin >> a >> b >> n;

    int l = 0, r = 1;

    while (!good(r))
        r *= 2;
    while (r > l + 1)
    {
        int mid = (r + l) / 2;
        if (good(mid))
            r = mid;
        else
            l = mid;
    }

    cout << r << endl;

    return 0;
}