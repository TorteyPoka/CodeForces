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
        int zeros = 0, ones = 0;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')zeros++;
            else ones++;
        }
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0' && ones){
                ones--;
                cnt++;
            }
            else if(s[i]=='1' && zeros){
                zeros--;
                cnt++;
            }
            else break;
        }

        cout << s.size() - cnt << endl;
    }
    return 0;
}