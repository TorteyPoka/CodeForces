#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count(0), f(0), g(0);
    char d;
    int w;
    string s;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s[i]>>s[i+1];

        if(s[i-2]==s[i])
        {
            f++;
            if(s[i-1]==s[i+1])
            {
                count++;
            }
        }
        g++;

    }
    cout<<f<<" "<<g<<" "<<count;

    return 0;
}