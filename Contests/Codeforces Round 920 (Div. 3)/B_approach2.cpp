/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define int long long
#define double long double
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
        string s,f;
        cin>>s>>f;
        int Omil = 0, Zeros = 0, Ones = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] != f[i])
            {
                Omil++;
                if(f[i] == '0')
                    Zeros++;
                else Ones++;
            }
        }

        int minChange = min(Ones, Zeros);

        cout << Omil - minChange << endl;
        
    }
    return 0;
}