#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "vika";

    string st;
    string sob;
    int count = 0;

    cin>>st;

    for(int i=0; i<4; i++)
    {
        if(st[i] == s[i])
        {
            sob[i] = st[i];
            count++;
        }
        
    }
    if(s == sob)
    {
        cout<<"OK";
    }
    else cout<<"Failed";

    cout<<count;
}