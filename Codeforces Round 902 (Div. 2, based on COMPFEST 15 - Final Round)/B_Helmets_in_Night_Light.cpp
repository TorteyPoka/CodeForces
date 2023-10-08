/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, p;
    cin >> n >> p;
    long long tail = n - 1;

    vector<long long> person(n), cost(n);

    for (long long i = 0; i < n; i++)
        cin >> person[i];
    for (long long i = 0; i < n; i++)
        cin >> cost[i];

    if (n == 1)
    {
        cout << p << "\n";
        return;
    }

    vector<pair<long long, long long>> v(n);

    for (long long i = 0; i < n; i++)
        v[i] = {cost[i], person[i]};

    sort(v.begin(), v.end());

    long long ans = p * n;

    long long sum = 0;

    for (long long i = 0; i < n; i++)
    {
        if (tail >= v[i].second)
        {
            sum += (v[i].first * v[i].second);
            tail -= v[i].second;
        }
        else if (tail > 0 && tail < v[i].second)
        {
            sum += (v[i].first * tail);
            tail = 0;
        }

        if (tail < 1)
            break;
    }

    cout << min(ans, sum + p) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}