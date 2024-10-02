/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin>>s;
    bool possible = 0;
    for(int i = 0; i<5; i++)
    {
        string s1;
        cin>>s1;
        if(s1[0] == s[0] || s[1] == s1[1])
        {
            possible = 1;
            break;
        }
    }   
    if(possible)cout << "YES";
    else cout << "NO";

    return 0;
}