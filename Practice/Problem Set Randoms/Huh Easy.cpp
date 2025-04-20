#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el;
#define no cout << "No" << el;

map<int,int> countmp(int* a, int n){
	map<int,int>mp;
	for(int i = 0; i<n; i++){
		mp[a[i]]++;
	}
	return mp;
}

/*----------X----------*//*


*/


void solve() {
	int n,k;
    cin>>n>>k;
    if(k<n/2){
        cout<<-1<<endl;
    }
	else{
    	for(int i=0;i<n;i++){
        	if(i%2){
        	    cout<<"B";
        	}
        	else{
        	    cout<<"A";
        	}
    	}
    	cout<<endl;
    	int cnt=k-n/2;
    	for(int i=0;i<n;i++){
        	if(i%2){
        	    cout<<"B";
        	}
        	else if(cnt){
        	    cout<<"A";
        	    cnt--;
        	}
        	else{
            	cout<<"C";
        	}
    	}
    	cout<<endl;
   	}
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}