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
    map<char, int>cp;
    for(int i = 0; i<s.size(); i++)
    {
        // cout << s[i] << " ";
        cp[s[i]]++;
    }
    // cout << endl;

    if(cp['H'] || cp['Q'] || cp['9'])
    cout << "YES";
    else cout << "NO";

    return 0;
}