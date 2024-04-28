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

        int ar[n];
        int s = 0, t = 0, flag = 0;

        vector<int>s;
        vector<int>t;

        for(int i=0; i<n; i++)
            cin>>ar[i];

        int mX = *max_element(ar, ar+n);
        
        for(int i=0; i<n-1; i++)
        {
            if(ar[i] == mX)
            {
                s.push_back(ar[i]);
            }
            

        //    if(ar[i] < ar[i+1])
        //     {
        //         if(flag > 0)
        //             s++;
        //         else{
        //             flag++;
        //         }
        //     } 
        }
        cout << s << endl;
        
    }
    return 0;
}