/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define int long long
#define endl "\n"

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
        int preStored = 0;
        int n;
        cin>>n;
        int ar[n];
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }

        int scale = sum/n;
        bool f = true;

        for(int i = 0; i<n; i++)
        {
            if(ar[i] > scale)
            {
                preStored+=(ar[i] - scale);
            }
            else if(ar[i] < scale)
            {
                if((scale - ar[i]) > preStored)
                {
                    f = false;
                    break;
                }
                else
                {
                    preStored-=(scale - ar[i]);
                }
            }
        }

        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;

        }
    return 0;
}