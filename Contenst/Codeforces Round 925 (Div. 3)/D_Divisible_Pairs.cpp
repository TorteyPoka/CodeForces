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
        int n, x, y;
        cin >> n >> x >> y;
        int ar[n];
        set<int>sop;

        int cnt = 0;
        int leastIndex = 0, preSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            // int x;
            // cin>>x;
            // sop.insert(x);
        }
        sort(ar,ar+n);
        
        // for(auto i : sop) cout << i << " ";
        // cout << endl;

        // for(int i = 0; i<n; i++)
        // {

        // }

        for (int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int x1 = ar[i] + ar[j], x2 = ar[j] + ar[i], y1 = ar[i] - ar[j], y2 = ar[j] - ar[i];
                // cout <<ar[i] << endl <<x1 << " " << y1 << " " << x2 << " " << y2<<endl;

                if ((x1 % x == 0 && y1 % y == 0) || (x2 % x == 0 && y2 % y == 0))
                {
                    cnt++; 
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}