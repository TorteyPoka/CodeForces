/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        long long x, n;
        cin >> x >> n;
        long long maxBalance = 1;
        long long maxDiff = 0;
        int min = __gcd(x, n);
        for (long long i = 1; i <= x / 2; ++i)
        {
            if ((x - i) % n == 0 && __gcd(i, x - i) > maxBalance)
            {
                maxBalance = __gcd(i, x - i);
                maxDiff = x-i;
            }
        }
        int h = 1;
        cout << maxDiff << " " << maxBalance << endl;
        h = __gcd(maxDiff, maxBalance);
        cout  << h << endl;
    }
    return 0;
}