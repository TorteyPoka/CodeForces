/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define int long long
#define end; "\n"

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
        // cout << s << endl;
        char c = '0';
        int erCap = 0, erSmal = 0;
        for(int i = s.size()-1; i>=0; i--)
        {
            // cout << s[i] << endl;
            char check = s[i];
            if(s[i] == 'b')
            {
                s[i] = c;
                erSmal++;
            }
            else if(s[i] == 'B')
            {
                s[i] = c;
                erCap++;
            }
            else if((int)s[i] >= 97 && erSmal>0 && s[i] != 'b')
            {
                s[i] = c;
                erSmal--;
            }
            else if((int)s[i] < 97 && erCap>0 && s[i] != 'B')
            {
                s[i] = c;
                erCap--;
            }
        }
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] != c)
                cout << s[i];
        }
        cout << endl;
        
         
    }
    return 0;
}