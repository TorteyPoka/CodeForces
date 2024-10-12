#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s1, s2;
        cin>> s1 >> s2;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(s2[i] == '1'){
                if(s1[i] == '0'){
                    cnt++;
                }
                else if(s1[i-1] == '1')
                {
                    s1[i-1] = 'a';
                    cnt++;
                }
                else if(s1[i+1] == '1')
                {
                    s1[i+1] = 'a';
                    cnt++;
                }                                            
            }
        }
        cout << cnt << endl;
    }

    return 0;
}