#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];

        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            while(x > n)
            {
                x/=2;
            }
            ar[i] = x;
        }  
            
        
         for(int i = 0; i < n; i++)
            cout<< ar[i] << " ";
            cout<<endl;
    }
}