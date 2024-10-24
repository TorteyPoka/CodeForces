#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int k; cin>>k;
    int ar[12];
    for(int&i:ar)cin>>i;
    sort(ar, ar+12, greater<int>());
    // for(auto i : ar)cerr << i << " ";
    int i = 0;
    for(; i<12;i++){
        if(k > 0)k-=ar[i];
        else break;
    }
    // cerr << endl << k << endl;
    if(k>0)cout << -1 << endl;
    else
    cout << i << endl;

    return 0;
}