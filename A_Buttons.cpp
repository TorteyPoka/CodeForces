/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int sum = (a+b+c);
        if(b > a)
        {
            cout << "Second" << endl;
        }
        else if(a > b)
        {
            cout << "First" << endl;
        }
        else if(sum % 2 == 1)
        {
            cout << "First" << endl;
        }
        else cout << "Second" << endl;
    }
    return 0;
}