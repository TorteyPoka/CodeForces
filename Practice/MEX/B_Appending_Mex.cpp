/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO int n;
    cin >> n;
    int ar[n];
    map<int, int> freq;
    set<int> MEX;
    for (int i = 0; i <= n; i++)
        MEX.insert(i);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (*MEX.begin() == ar[i])
        {
            MEX.erase(ar[i]);
            freq[ar[i]]++;
        }
        if (freq[ar[i]] == 0)
        {
            ans = i + 1;
            break;
        }
    }
    if (ans == 0)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;

    return 0;
}