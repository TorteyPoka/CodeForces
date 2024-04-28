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
        int n, k;
        cin>>n>>k;
        
        int ans = 0;

        if(k == ((4*n)-2))
        {
            cout << 2*n << endl;
            continue;
        }

        if(k > (2*n))
        {
            // int upperHalf = (2*n) - 2;
            k-= (2*n);
            int restAns = 0;
            if(k%2==0)
            {
                restAns = k/2;
            }
            else
            {
                restAns = ceil((float)k/2);
            }
            ans  = n + restAns;
        }
        else 
        {
            if(k%2==0)
            {
                ans = k/2;
            }
            else
            {
                ans = ceil((float)k/2.00);
            }
        }

        cout << ans << endl;
    }
    return 0;
}