#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        long long l, r;
        cin>>l>>r;

        long long d = (l+r) / 2;

        cout << ceil(d / 2) << " " << floor(d / 2)<<endl;
    }
}