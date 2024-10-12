/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int n;
    cin >> n;
    int mx = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    int totalExpense = 0;
    for (int i = 0; i < n; i++)
    {
        totalExpense += abs(ar[i] - mx);
    }
    cout << totalExpense << endl;

    return 0;
}