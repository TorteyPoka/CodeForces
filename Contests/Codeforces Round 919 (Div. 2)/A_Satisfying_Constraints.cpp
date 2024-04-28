/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

bool comp (pair<int, int> &a, pair<int,int> &b)
{
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<pair<int, int>> v;

        int minimum = INT32_MIN; int maximum = INT32_MAX;

        vector<int>track;

        for(int i = 0; i<n; i++)
        {
            int k,x;
            cin>>k>>x;
            v.push_back(make_pair(k,x));
            if(k == 1)
                minimum = max(minimum, x);
            else if(k == 2)
                maximum = min(maximum, x);
            else
                track.push_back(x);
        }
        // cout << minimum << " " << maximum << endl;
        int ans = (maximum - minimum)+1;

        for(auto& i : track)
            ans-=(i >= minimum && i<=maximum);

        cout<<max(0,ans)<<endl;
    }
    return 0;
}