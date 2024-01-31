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
        ll n,m;
        cin>>n>>m;

        int v = 0;
        if(m%2 != 0)
            v+=1;
        cout << 1ll*(n*m)/2 - 1ll*(n*v)/2<<endl;
        
    }
    return 0;
}