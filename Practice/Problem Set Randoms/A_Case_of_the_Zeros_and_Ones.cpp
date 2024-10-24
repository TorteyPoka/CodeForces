#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int n; cin>>n;
    string s;
    cin>>s;
    int on = 0, zr = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0')zr++;
        else on++;
    }
    cout << (on > zr ? on - zr : zr - on) << endl;

    return 0;
}