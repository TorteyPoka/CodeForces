#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;

        int pL = n - 1, pR = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'A')
            {
                pL = i;
                break;
            }
        }
        for(int i = n-1; i>=0; i--)
        {
            if(s[i] == 'B')
            {
                pR = i;
                break;
            }
        }
        cout << max(0, (pR - pL)) << endl;
    }

    return 0;
}