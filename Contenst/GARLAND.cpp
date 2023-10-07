#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int l = s.length();

        int ans = 0;

        for(int i=0; i<l; i++)
        {
            
            if(s[i] != s[i+1])
            {
                ans++;
                s[i] = 1;
            }
        }
        cout << ans << endl;
    }
}