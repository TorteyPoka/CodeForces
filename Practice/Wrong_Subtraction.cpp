#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=0; i<k; i++)
    {
        int get=n%10;
        if(get!=0)
        {
            n-=1;
        }
        else{
            n/=10;
        }
    }
    printf("%d", n);

    return 0;
}