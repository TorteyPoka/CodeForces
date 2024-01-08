/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
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
        int l = s.size();
        int Os = 0;
        int Zs = 0;

        for(int i = 0; i<l; i++)
        {
            if(s[i] == '1')
                Os++;
            else Zs ++;
        }
        int ans = abs(Zs - Os);
        int pass = min(Os, Zs);
        int boro = max(Os, Zs);

        if((pass * 2) == boro)
            ans+=pass;
        
        cout << ans << endl;
    }
    return 0;
}