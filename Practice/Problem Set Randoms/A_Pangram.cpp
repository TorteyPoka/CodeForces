#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, sum = 0;
    cin>>n;
    string s;
    cin>>s;
    set<char>Alphabet;

    for(int i = 0; i<n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        Alphabet.insert(s[i]);
    }
    if(Alphabet.size() == 26)
        cout << "YES" << endl;
    else cout<< "NO" << endl;

    return 0;
}