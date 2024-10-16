/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int n, q;
    cin>>n>>q;
    int ar[n];
    for(int&i : ar)cin>>i;
    while(q--){
        int x;
        cin>>x;
        int l = -1, r = n;
        while(r > l+1){
            int mid=(r + l) / 2;
            if(ar[mid] < x)l = mid;
            else r = mid;
        }
        cout << r + 1 << endl;
    }

    return 0;
}