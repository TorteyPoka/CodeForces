#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);

    set<char>dsChars;

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            dsChars.insert(s[i]);
    }

    cout << dsChars.size();


    return 0;
}