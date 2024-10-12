#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int cntPlus=0, cntMinus = 0;

        for(int i = 0; i<n; i++)
        {
            char c;
            cin>>c;
            if(c == '-')
                cntMinus++;
            else cntPlus++;
        }        
        int p = min(cntMinus, cntPlus);
        int h = max(cntMinus, cntPlus);

        cout << h - p << endl;
    }

    return 0;
}