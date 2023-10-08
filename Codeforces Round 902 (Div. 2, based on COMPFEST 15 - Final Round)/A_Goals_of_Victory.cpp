#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum1 = 0, sum2 = 0;
    cin>>n;
    for(int i = 0; i<n-1; i++)
    {
        int x;
        cin>>x;

        if(x >= 0)
            sum1 += x;
        else 
            sum2 += x;
    }
    int res = sum1 - abs(sum2);
    if(res > 0)
        cout<<"-"<< res <<endl;
    else
        cout<< abs(res) << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}