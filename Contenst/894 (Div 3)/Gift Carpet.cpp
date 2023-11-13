#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--)
    {
        int n,m, p = 1;
        cin>>n>>m;

        for(int i=0; i<n; i+p=i)
        {
            string s;
            cin>>s;

            for(int j = p; j<m; j+p=j)
            {
                if(s[j] == 'v' || s[j] == 'i' || s[j] == 'k' || s[j] == 'a')
                {
                    p++;
                }
            }
        }
    }
}