/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#include "B_Following_the_String.h"
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
        ans();
    }
    return 0;
}
void ans()
{
    int n;
    cin >> n;
    int ar[n];

    vector<int> vp(26, 0);

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
    {
        // cout << "l1" << endl;
        for (int j = 0; j < 26; j++)
        {
            if (vp[j] == ar[i])
            {
                vp[j]++;
                cout << char(j + 97);
                break;
            }
            // cout << vp[j] << " " << ar[i] << endl;
        }
    }
    cout << endl;
}