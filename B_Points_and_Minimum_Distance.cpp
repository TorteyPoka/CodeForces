/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int ar[2*n];
        vector<pair<int, int>>vp;

        for(int i = 0; i<2*n; i++)
        {
            cin>>ar[i];
        }

        sort(ar, ar+(2*n));
        int diff1 = 0, diff2 = 0;
        // int j = 0;
        for(int i = 1; i<=n; i++)
        {
            // cout << ar[i-1] << " " << ar[n+j] << endl;
            vp.push_back(make_pair(ar[i-1], ar[n+(i-1)]));
            if(i < n)
            {
                diff1 += abs(ar[i] - ar[i-1]);
                diff2 += abs(ar[n+i] - ar[n+(i-1)]);
            }
        }
        // cout << diff1 << " " << diff2 << endl;
        cout << abs(diff1 +  diff2) << endl;
        for(auto i : vp)
            cout << i.first << " " << i.second << endl;
        
    }
    return 0;
}