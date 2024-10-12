#include<iostream>

using namespace std;

int main()
{
    int n,s;    
    cin>>n;

    while(n>0){
        cin>>s;
        if(s == 1)
        {
            cout<<"HARD";
            return 0;
        }
        n--;
    }
    cout<<"EASY";
    return 0;
}