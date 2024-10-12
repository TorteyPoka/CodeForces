#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n, m;
    cin>>n>>m;
    
    if(n>m)
        swap(n,m);

    if(n%2)
        cout << "Akshat";
    else cout << "Malvika";
    

    return 0;
}