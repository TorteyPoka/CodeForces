#include<bits/stdc++.h>

using namespace std;
bool canWinGame(int n, string &s, const string &r)
{
    for (int i = 0; i < n - 1; ++i)
    {
        bool found = false;
        for(int k = 0; k<s.size() - 1; k++){
            if(s[k] != s[k+1]){
                found =true;
                s[k+1] = r[i];
                s.erase(s.begin() + k);
                break;
            }
        }
        if(!found)return false;
        // size_t pos = s.find("01");
        // if (pos == string::npos)
        // {
        //     pos = s.find("10");
        // }
        // if (pos == string::npos)
        // {
        //     return false;
        // }
        // s[pos] = r[i];       
        // s.erase(s.begin() + pos + 1);
    }   
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        string s;
        cin >> s; 
        string r;
        cin >> r; 
        
        if (canWinGame(n, s, r))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
