/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ar[100 + 1];
        for (int i = 0; i < n; i++)
            cin>>ar[i];
        
        sort(ar,ar+n);
        int sum = 0;
        for(int i = 1; i<n; i++)
        {
            sum+=(ar[i] - ar[i-1]);
        }

        cout << sum << endl;
        
    }
    return 0;
}