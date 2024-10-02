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
        int n, k, x;
        cin>>n>>k>>x;

        if(k > x &&  (k - x) > 1 || (k - n) > 0)
        {
            cout << -1 << endl;
            continue;
        }
        int sum = 0;
        for(int i = 0; i<=n; i++)
        {
            if(i == k)
            {
                if(k == x)
                {
                    sum+= (x-1) * (n-i);
                }
                else sum+= x * (n-i);
                break;
            }
            else sum+=i;
        }

        cout << sum << endl;
    }
    return 0;
}