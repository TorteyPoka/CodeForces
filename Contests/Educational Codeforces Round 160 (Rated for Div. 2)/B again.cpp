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

        int l = s.size();

        int start = 0;
        int end = l-1;
        int passO = 0;
        int passZ = 0;

        while(start!=end)
        {

            if(s[start] == '0' && s[end] == '1' && passO == 0 && passZ == 0)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            
            if(s[start] == '0' && s[end] != '1')
            {
                passO = end;
                end--;
            }
            
            if(s[start] != '0' && s[end] == '1')
            {
                passZ = start;
                start++;
            }
            
            if(s[start] == '0' && s[end] == '1' && passO != 0)
            {
                end = passO;
                passO = 0;
            }

        }
    }
    return 0;
}