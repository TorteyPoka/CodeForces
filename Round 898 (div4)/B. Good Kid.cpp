#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, prod = 1;
        cin>>n;

        int ar[n];
        
        for(int i=0; i<n; i++)
        {cin>>ar[i];}

        sort(ar, ar+n);

        ar[0] = ar[0] + 1;

        for(int i=0; i<n; i++)
        {
            prod*=ar[i];
        }

        cout<<prod<<endl;

    }
}