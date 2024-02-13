/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

bool compare(int a, int b) 
{ 
    if (a % 2 == 0 && b % 2 == 0) 
        return a < b; 
    if (a % 2 != 0 && b % 2 != 0) 
        return b > a; 
    if (a % 2 != 0) 
        return true; 
    return false; 
} 
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
        int ar[n],ar1[n];
        for(int i = 0; i<n; i++) 
        {
            cin>>ar[i];
            ar1[i] = ar[i];
        }
        map<int,int>mp1, mp2;

        int per[n];
        int j = 0;
        for(int i = n; i>0; i--)
        {
            per[j] = i;
            j++;
        }
        // for(auto i : ar) cout << i << " ";
        // cout << endl;


        // for(auto i : per) cout << i << " ";
        // cout << endl;

        sort(ar, ar+n);
        for(int i = 0; i<n; i++)
        {
            ar[i] = ar[i] + per[i];
            mp1[ar[i]]++;
        }
        int maxe1 = 0;
        for(auto i : mp1)
        {
            maxe1 = max(maxe1,i.second);
        }

        sort(ar1, ar1+n, compare);
        // cout << "after 2 way sort ";
        // for(auto i:ar1)cout << i << " ";
        // cout << endl;

        for(int i = 0; i<n; i++)
        {
            ar1[i]+=per[i];
            mp2[ar1[i]]++;
        }
        int maxe2 = 0;
        for(auto i : mp2)
        {
            maxe2 = max(maxe2, i.second);
        }
        // cout << "mp1 ";
        // for(auto i: mp1)cout << i.second << " ";
        // cout << endl;
        // cout << "mp2 ";
        // for(auto i: mp2)cout << i.second << " ";
        // cout << endl;

        cout << max(maxe1, maxe2) << endl;
    }
    return 0;
}