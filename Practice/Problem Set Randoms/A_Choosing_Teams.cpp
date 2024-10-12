/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int n , k;
    cin>>n>>k;
    int ar[n];
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        ar[i] = 5 - ar[i];
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(ar[i] >= k)cnt++;
    }
    cout << cnt / 3 << endl;

    return 0;
}