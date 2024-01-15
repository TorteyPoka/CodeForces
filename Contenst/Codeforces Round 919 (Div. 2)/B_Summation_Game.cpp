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
        int n,k,x;
        cin>>n>>k>>x;   

        int totalSum = 0;

        int ar[n];
        for(int i = 0; i<n; i++)
        {
            cin>>ar[i];
            totalSum+=ar[i];   
        }

        sort(ar, ar+n, greater<int>());

        

    }
    return 0;
}