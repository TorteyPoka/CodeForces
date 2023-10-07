#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, n;
        cin>>a>>b>>n;

        long long sec = 0;
                    int c = b;

        while(sec != 1000000000+1)
        {
            int x;
            if(c < a)
                {
                    cin>>x;
                    continue;
                }
            b+=x;

            if(c > a)
                c = a;
            else{
                b+=x;
            }
        

            

            sec++;
        }
    }

    return 0;
}