#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];

    int ev = 0;
    int od = 0;

    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        if(ar[i]%2==1)
        {
            od++;
        }
        else ev++;
    }

    
}