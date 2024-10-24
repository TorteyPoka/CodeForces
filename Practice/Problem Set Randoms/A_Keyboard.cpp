#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

char alpha[3][10];
void prints(char c, char dir)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (alpha[i][j] == c)
                if (dir == 'L')
                    cout << alpha[i][j + 1];
                else
                    cout << alpha[i][j - 1];
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    string AL = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int track = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 10; j++)
            alpha[i][j] = AL[track], track++;

    char dir;
    cin >> dir;
    string kana;
    cin >> kana;
    for (int i = 0; i < kana.size(); i++)
    {
        prints(kana[i], dir);
    }

    return 0;
}