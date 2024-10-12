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

    int n, k;
    cin>>n>>k;

    int ar[n];

    for(int i = 0; i<n; i++)cin>>ar[i];

    sort(ar, ar+n, greater<>());

    cout << ar[k-1];   

    return 0;
}