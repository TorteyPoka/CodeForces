/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

class Input
{
public:
    void ar(int ar[], int n)
    {
        for (int i = 0; i < n; i++)
            cin >> ar[i];
    }
    void map_int(int ar[], int n, map<int, int> &mp)
    {
        for (int i = 0; i < n; i++)
            mp[ar[i]]++;
    }
    void map_str(string s, map<char, int> &mp)
    {
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
    }
};
Input read;

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define inputar(ar, n)          \
    for (int i = 0; i < n; i++) \
        cin >> ar[i];
#define printar(ar, n)          \
    for (int i = 0; i < n; i++) \
        cout << ar[i] << " ";   \
    cout << endl;
#define printvec(v)       \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl;
#define all(v) v.begin(), v.end()

bool comparator(const pair<int,int> &p1, const pair<int,int> &p2){
    return p1.first == p2.first ? p1.second > p2.second : p1.first < p2.first;
}


void crack()
{
    string s;
    cin>>s;
    int n = s.size();
    int pref[n];
    int pos[n];
    pref[0] = 0;
    pos[0] = 1;
    for(int i = 1; i<n; i++){
        if(s[i-1] == '('){
            pref[i] = pref[i-1] + 1;
        }
        else{
            pref[i] = pref[i-1] - 1;
        }
        pos[i] = i+1;
    }
    vector<pair<int,int>>vp;
    for(int i = 0; i<n; i++){
        vp.push_back(make_pair(pref[i], pos[i]));
    }

    sort(vp.begin(), vp.end(), comparator);

    for(int i = 0; i<n; i++){
        cout << s[vp[i].second-1];
    }    
    cout << endl;
}

int32_t main()
{
    // faf auto st = clock();
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}