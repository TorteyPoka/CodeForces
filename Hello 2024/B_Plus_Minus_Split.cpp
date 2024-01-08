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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == '+')
                sum+=1;
            else sum-=1;
        }
        cout << abs(sum) << endl;
    }
    return 0;
}