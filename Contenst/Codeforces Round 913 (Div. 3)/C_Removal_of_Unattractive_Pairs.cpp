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
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<char,int>mp;

        for(int i = 0; i<n; i++)
        {
            mp[s[i]]++;
        }
        multimap<int, char, greater<int>>mmp;
        for(auto i : mp)
        {
            mmp.insert({i.second, i.first});
        }

        // for(auto i : mmp) cout << i.first << " " << i.second << endl;
        // cout << endl;
        int maxe = 0, restTotal = 0;

        int ans = 0;
        bool f = false;

        for(auto i : mmp)
        {
            if(!f)
            {
                maxe = i.first;
                f = true;
                continue;
            }
            if(i.first == maxe)
            {
                f=false;
                continue;
            }
            restTotal+=i.first;
        }
        if(restTotal == 0)
        {
            cout << n%2 << endl;
        }
        else
        // cout << maxe << " " << restTotal << " " << restTotal - maxe << endl;
        cout << maxe - restTotal << endl;
        // cout << endl;

    }
    return 0;
}