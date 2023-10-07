#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long temp[n*2], t=1;

    cout<<sizeof(temp)<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            temp[t] = i;
        }
        else {
            temp[t+4] = i;
            t++;
        }
    }
    long long ans = temp[k];
    cout<<ans;
}