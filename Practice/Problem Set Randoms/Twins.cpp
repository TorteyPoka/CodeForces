#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n];
    
    int sum(0), sum1(0), count(0);

    for(int i=0; i<n; i++)
    {
        cin>>m[i];
        sum+=m[i];
    }
    sum/=2;
    sort(m,m+n);
    for(int i=n-1; i>=0; i--)
    {
        sum1+=m[i];
        count++;
        if(sum1>sum)
            break;
    }

    cout<<count;

    return 0;
}