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
        ll a,b,r;
        cin>>a>>b>>r;

        ll res = abs((a^0)-(b^0));
        // cout <<res;

        for(int i = 0; i<=r; i++)
        {
            ll temp = abs(((a^i))-(b^i));
            if(res > temp)
                res = temp;
        }
        cout << res <<endl;
    }
    return 0;
}