/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, p;
    cin >> n >> p;
    long long trail = n - 1;

    vector<pair<long long, long long>> v(n);
    int loopCount = 0;

    for(int i = 0; i<n; i++)
        cin>>v[i].second;

    for(int i = 0; i<n; i++)
        cin>>v[i].first;

    if (n == 1)
    {
        cout << p << "\n";
        return;
    }

    sort(v.begin(), v.end());

    long long ans = p * n;

    long long sum = 0;

    for (long long i = 0; i < n; i++)
    {
        if (trail >= v[i].second)
        {
            sum += (v[i].first * v[i].second);
            trail -= v[i].second;
        }
        else if (trail > 0 && trail < v[i].second)
        {
            sum += (v[i].first *trail);
            trail = 0;
        }

        if (trail < 1)
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