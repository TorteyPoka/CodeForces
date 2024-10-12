#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char, int>m;

        for(char &i : s)
        {
            m[i]++;
        }

        int odd = 0, even =0;

        for(auto& i:m)
        {
            int value = i.second;
            if(value&1)
                odd++;
            // else even++;
        }

        if(k>=(odd-1))
        cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}