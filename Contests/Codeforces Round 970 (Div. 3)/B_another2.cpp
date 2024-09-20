/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0, zeros = 0;
    vector<int> ans;

    if (s[0] != '1' || s[n - 1] != '1')
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones++;
            if (zeros)
            {
                ans.push_back(zeros);
                zeros = 0;
            }
        }
        else
        {
            zeros++;
            if (ones)
            {
                ans.push_back(ones);
                ones = 0;
            }
        }
    }
    ans.push_back(ones);

    if(zeros){
        cout << "No" <<endl;
        return;
    }

    cerr << ans.size() << endl;
    cerr << "Ones " << ones << endl;

    for (auto i : ans)
    {
        cerr << i << " ";
    }
    cerr << endl;


    if(ans.size() == 1){
        if(ones == 4){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
        return;
    }

    

    int start = 0, end = ans.size() - 1;

    bool possible = true;

    while (start < end)
    {
        if (ans[start] == ans[end])
        {
            start++;
            end--;
        }
        else
        {
            possible = false;
            break;
        }
    }
    if (possible)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}