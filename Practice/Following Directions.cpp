#include<iostream>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n];
        int c(0), c1(0), m(0);

        for(int i=0; i<n; i++)
        {
            cin>>s[i];

            if(s[i]=='U')
                c++;
            
            else if(s[i]=='D')
                c--;
            
            else if(s[i]=='R')
                c1++;
            
            else if(s[i]=='L')
                c1--;
            
            if(c==1 && c1==1)
                m++;
            
        }
        if(m>0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}