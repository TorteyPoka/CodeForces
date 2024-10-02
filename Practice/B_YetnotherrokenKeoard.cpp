/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
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
        string s;
        cin>>s;
        int cntCap = 0, cntSmal = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'B' && cntCap)
            {
                cntCap--;
            }
            if((int)s[i] < 97) cntCap++;
        }
    }
    return 0;
}