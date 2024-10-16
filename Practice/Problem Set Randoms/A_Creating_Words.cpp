/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int T;
    cin>>T;
    while(T--){
        string s1, s2;
        cin>>s1>>s2;
        swap(s1[0] , s2[0]);
        cout << s1 << " " << s2 << endl;
    }   

    return 0;
}