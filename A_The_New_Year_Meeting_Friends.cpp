/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;
    cout << max({a, b, c}) - min({a,b,c});

    return 0;
}