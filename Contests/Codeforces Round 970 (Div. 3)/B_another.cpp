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
    vector<int> v;

    int zeros = 0, ones = 0, totalOnes = 0, totalZeros = 0;

    if(s[n-1] == '0'){
        cout << "No" << endl;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (ones)
            {
                v.push_back(ones);
                ones = 0;
            }
            zeros++;
            totalZeros++;
        }
        else
        {
            if (zeros)
            {
                v.push_back(zeros);
                zeros = 0;
            }
            ones++;
            totalOnes++;
        }
    }   
    if(ones){
        v.push_back(ones);
    }

    cerr << v.size() << endl;

    if(v.size() == 1){
        if(totalOnes == 4){
            cout << "Yes" << endl;
        } 
        else cout << "No" << endl;
        return;
    }


    if(totalOnes != ((totalZeros * 2) * 4)){
        cout << "No" << endl;
        return;
    }

    if(v.size() % 2 == 0){
        cout << "No" << endl;
        return;
    }
    // cout << ones << "  " << zeros << endl;
    int start = 0, end = v.size() - 1;
    bool possible = true;
    while (start < end)
    {
        if (v[start] == v[end])
        {
            start++, end--;
        }
        else
        {
            possible = false;
            break;
        }
    }

    // for(auto i : v){
    //     cerr << i << " ";
    // }
    // cerr << endl;
    if (possible)
    {
        cout << "Yes" << endl;
    }
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