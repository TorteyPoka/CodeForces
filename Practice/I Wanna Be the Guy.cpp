#include<iostream>

using namespace std;

int main()
{
    int n;
    string s1, s2;

    cin>>s1;
    cin>>s2;

    for(int i = 0; i<n; i++)
    {
        if(s1[i] == n || s2[i]==n)
        {
            cout<<"I became the guy.";
            break;
        }
    }
    return 0;
}