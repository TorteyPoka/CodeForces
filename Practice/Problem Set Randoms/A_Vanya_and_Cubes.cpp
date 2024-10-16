/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO int n;
    cin >> n;
    int ans = 1;
    int rest = 1;
    while (rest <= n)
    {
        ans++;
        rest += ((ans * (ans + 1)) / 2);
    }
    cout <<ans - 1 << endl;
    return 0;
}