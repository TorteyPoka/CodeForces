#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string temp = s;
        string s1 = "abc";

        if(s == "abc")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(s[0] == 'a')
            {
                swap(s[1], s[2]);
                if(s == s1)
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else if(s[0] == 'b')
            {
                swap(s[0], s[1]);
                if(s == s1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    s = temp;

                    swap(s[0], s[2]);

                    if(s == s1)
                    {
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
            else
            {
                    swap(s[0], s[2]);
                    if(s == s1)
                    {
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
    
}