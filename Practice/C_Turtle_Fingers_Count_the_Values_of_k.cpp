/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int q;cin>>q;
    while(q--)
    {
        int a, b, l;
        cin>>a>>b>>l;
        int x = log(l) / log(a);
        int y = log(l) / log(b);

        int k = x + y;
        cout << k << endl;
    }

    return 0;
}