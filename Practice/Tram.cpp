#include<iostream>

using namespace std;

int main()
{
    int n, a, b, icap(0),cap(0);
    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        icap-=a;
        icap+=b;

        if(icap>cap)
        {
            cap=icap;
        }
    }
    cout<<cap;

    return 0;
}