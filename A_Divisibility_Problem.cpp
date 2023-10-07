#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, count = 0;
        cin>>a>>b;
        if(a%b==0)
            cout<<count<<endl;
        else{
            int flag = a%b;
            cout << abs(flag - b) << endl;
        }

    }

    return 0;
}