/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    if(k > n)
        return 0;

    ll even_count;
    ll odd_count = 0;
    // in an ODD range even_count = odd_count - 1
    // in an EVEN range they are 1:1;

    if (n % 2 == 0)
        even_count = n / 2;
    else
        even_count = (n / 2) + 1;

    ll ar[n];

    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ar[even_count] = i;
            even_count++;
        }
        else
        {
            ar[odd_count] = i;
            odd_count++;
        }
    }

    // for (auto i : ar)
    //     cout << i << " ";

    // cout<<endl;
    cout<< ar[k-1];

    return 0;
}