#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

bool magic_num(int n)
{
    int four = 0;
    while (n)
    {
        int last = n % 10;
        cerr << last << " ";
        n /= 10;
        if (last != 1 and last != 4)
            return false;
        if (last == 4)
            four++;
        if (four > 2)
            return false;
        if (last == 1)
            four = 0;
    }
    if(four)return false;
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    if (magic_num(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cerr << endl;
    return 0;
}