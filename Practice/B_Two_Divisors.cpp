/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = lcm(a, b);
        if (ans != b)
            cout << ans << endl;
        else
            cout << b * (b / a) << endl;
    }
    return 0;
}