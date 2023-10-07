#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        long long A, B;
        cin>>A>>B;

        if(B == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<A<<" "<<A*B<<" "<<A*(B+1)<<endl;
        }
    }
    return 0;
}