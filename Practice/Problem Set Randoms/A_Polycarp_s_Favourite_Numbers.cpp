/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v;
    bool working = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x % 2 == 0)
        {
            working = 1;
            v.push_back(x);
        }
    }
    if(!working)
    {
        cout << 1 << " " << n;
        return 0;
    }

    int ans1 = INT_MIN;

    for(auto x : v)
    {
        cout << x << " ";
        if((x & x-1) == 0)
        {
            ans1 = ans1 >= x? ans1 : x;
            continue;
        }
        
        // for(int i = x/2; i>=4; i--)
        // {
        //     if( x % i == 0 && (i & i-1) == 0)
        //     {
        //         ans1 = ans1 >= i ? ans1:i;
        //         break;
        //     }
        // }
    }
    if(ans1 == INT_MIN) ans1 = 2;
    int ans2  =  1-1;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] % ans1 == 0)ans2++;
    }

    cout << ans1 << " " << ans2;
    // sort(ar, ar + n, greater<int>());
    // int ans1 = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ar[i] % 2)
    //         continue;
    //     working = 1;
    //     //! Only for one number
    //     // vector<int> divisors;
    //     if((ar[i] & ar[i] - 1) == 0)
    //     {
    //         ans1 = ans1 >= ar[i] ? ans1 : ar[i];
    //         continue;
    //     }
    //     for (int ii = ar[i] / 2; ii>=1; ii--)
    //     {
    //         if (ar[i] % ii == 0 && ii & ii-1 == 0)
    //         {
    //             ans1 = ans1 >= ii ? ans1 : ii;
    //             // divisors.push_back(ii);
    //         }
    //     }

    //     // for (int iii = divisors.size() - 1; iii >= 0; iii--)
    //     // {
    //     //     if (__builtin_popcount(divisors[iii]) == 1)
    //     //     {
    //     //         ans1 = divisors[iii] >= ans1 ? divisors[iii] : ans1;
    //     //         break;
    //     //     }
    //     // }
    //     //! Ends here
    // }

    return 0;
}