#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/


int p[2003];
 
int_fast32_t main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> p[i];
    int res=0;
    for(int i=1;i<=n;i++){
        int j=i,k=0;
        while(j!=-1){
            j=p[j];
            k++;
        }
        res=max(res,k);
    }
    cout<<res<<endl;
}