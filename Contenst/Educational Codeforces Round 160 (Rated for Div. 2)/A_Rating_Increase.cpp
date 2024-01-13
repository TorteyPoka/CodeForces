/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        string a, b;
        
        int l = s.size();
        
        int aF = 0;

        for(int i = 1; i<l; i++)
        {
            if(s[i] != '0')
                break;
            else aF++;
        }
        a = s.substr(0, aF+1);
        b = s.substr( a.size(), l - (aF-1));

        int x, y;
        x = stoi(a);
        y = stoi(b);

        if(x < y)
            cout << a << " " << b << endl;
        else cout << -1 << endl;

        
    }
    return 0;
}