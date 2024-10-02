#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int length=s.length();
    int cnt=0;
    for(int i=0;i<length;i++)
    {
        if(s[i]!=s[i-1])
        cnt++;
    }

    if (cnt&1)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }

}