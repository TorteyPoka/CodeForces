#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ans(){ 
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        bool f = false;
        bool endBreak = false;
        string checkWUB;

        if (s[i] == 'W')
        {
            for (int j = 0; j < n; j++)
            {
                checkWUB = s.substr(i, 3);
                if (checkWUB == "WUB")
                {
                    i += 3;
                    f = true;
                    if(i >= n-1)
                    {
                        endBreak = true;
                        break;
                    }
                    continue;
                }
                else
                    break;
            }
        }
        if(endBreak)
            break;
        if(f) cout << " "; 
        cout << s[i];
    }
}

void ans1(){
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // ans();
    ans1();
    
    return 0;
}