/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int start = 0, end = n-1;
        int f = 0;
        while(start<=end)
        {
            if(s[start] == 'B')
            {
                while(start<=end)
                {
                    if(s[end] == 'B')
                    {
                        cout << (end-start) + 1 << endl;
                        f = 1;
                        break;
                    }
                    end--;
                }
            }
            if(f) break;
            start++;
        }
    }
    return 0;
}