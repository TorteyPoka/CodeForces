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
        //  int ar[n];
        int max = INT_MIN;
        int min = INT_MAX;
        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            if(max < x)
                max = x;
            if(min > x)
                min = x;

            
        }
        cout<<max << " " <<min << endl;

        cout<<abs(max-min)<<endl;
    
    }
    return 0;
}