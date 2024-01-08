/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

bool equiv(string a, string b)
{
    if (a == b)
        return true;

    if (a.size() % 2 == 1)
        return false;

    int l = a.length();

    string a1 = a.substr(0, l / 2);
    string a2 = a.substr(l / 2, l / 2);
    string b1 = b.substr(0, l / 2);
    string b2 = b.substr(l / 2, l / 2);

    return equiv(a1, b1) && equiv(a2, b2) || equiv(a2, b1) && equiv(a1, b2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    if(equiv(a,b))
        cout << "YES";
    else cout << "NO";
    

    return 0;
}