/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int a1,a2,a3,a4;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')ans+=a1;
        else if(s[i] == '2')ans+=a2;
        else if(s[i] == '3')ans+=a3;
        else ans+=a4;
    }   
    cout << ans  <<endl;

    return 0;
}