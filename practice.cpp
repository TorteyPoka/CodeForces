#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int l = strlen(s);
    int n, c(0);
    for(int i=0; i<l; i++)
    {
        if(s[i]/4==0 || s[i]/7==0)
        {
            c++;
        }
         n = atoi(s);
    }
    if(n%4==0 || n%7==0 || c==l)
    {
        cout<<"YES";
    }
    else cout<< "NO";
  
return 0;
}