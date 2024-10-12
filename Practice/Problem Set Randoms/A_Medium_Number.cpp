/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
int T,a,b,c;
int32_t main()
{
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        int medium=((a>b and a<c)||(a<b and a>c))?a:((b>a and b<c)||(b<a and b>c))?b:c;
        cout << medium << endl;
    }
    return 0;
}