#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin>>n;
    long double t=n, org(0);;

    while(n--)
    {
        cin>>d;
        org+=d;
    }
    long double ans = org/t;
    cout<<ans;
}