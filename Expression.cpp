/*
Solved by,
Sakhawat Hossain Mahin
SMUCT
ID: 213071026
CSE 28th Batch
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c, res(0);

    cin>>a>>b>>c;

    res = max(a+b*c, max(a*(b+c), max(a*b*c, max((a+b)*c, max(a+b+c, a*b+c)))));

    cout<<res;

    /*
    a+b*c
    a*(b+c)
    a*b*c
    (a+b)*c
    */

   return 0;
}