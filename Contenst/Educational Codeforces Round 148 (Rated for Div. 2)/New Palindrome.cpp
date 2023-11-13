#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char c;

    while(n--)
    {
        string s, s1, s2;
        cin>>s;

        s1 = s;

        int l = s.length();

        for(int i = 0; i<l; i++)
        {
            c = s[i];
            s[i] = s[i+1];
            s[i+1] = c;
            c = s[l-1];
            s[l-1] = s[l-2];
            s[l-2] = c;

            s2 = s;

            if(s != s1)
            {
                reverse(s.begin(), s.end());
                if(s == s2)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }

        }
    }

    return 0;
}