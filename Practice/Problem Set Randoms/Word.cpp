#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int get1=0;

    for(int i=0; i<=s.size(); i++)
    {
        if(isupper(s[i]))
        {
            get1++;
        }
    }
    if(get1>(int)s.size()/2)
    {
        transform(s.begin(), s.end(), s.begin(), :: towupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), :: towlower);
    }
    cout << s << endl;

    return 0;
}