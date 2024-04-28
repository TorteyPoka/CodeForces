#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, k, count = 0;
        cin>>n>>k;

        string s;
        cin>>s;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                string sub_s = s.substr(i, k);
                for(int j = i; j < sub_s.size(); j++)
                {
                    s[i] = 'W';
                }
                i = i + (k-1);
                count++;
            }
        }
        cout<<count<<endl;
    }
   return 0;
}