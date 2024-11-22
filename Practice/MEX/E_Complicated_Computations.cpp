#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    set<int> mex;
    for (int i = 1; i <= n + 1; i++)
    {   
        mex.insert(i);
    }
    int ar[n];
    for(int&i : ar){
        cin>>i;
        if(mex.find(i) != mex.end()){
            mex.erase(i);
        }
    }
    set<int>ans;
    ans.insert(*mex.begin());
    for (int i = 1; i <= n + 2; i++)
    {   
        mex.insert(i);
    }
    int p1 = 0, p2 = n-1;
    while(p1 < p2){
        if(mex.find(ar[p1]) != mex.end()){
            mex.erase(ar[p1]);
        }
        ans.insert(*mex.begin());
        p1++;
    }
    p1 = 0;
    for (int i = 1; i <= n + 2; i++)
    {   
        mex.insert(i);
    }
    while(p1 < p2){
        if(mex.find(ar[p2]) != mex.end()){
            mex.erase(ar[p2]);
        }
        ans.insert(*mex.begin());
        p2--;
    }
    for (int i = 1; i <= n + 2; i++)
    {   
        mex.insert(i);
    }
    for(int i = 1; i<n-1; i++){
        if(mex.find(ar[i]) != mex.end()){
            mex.erase(ar[i]);
        }
        ans.insert(*mex.begin());
        mex.insert(ar[i]);
    }
    for(auto i : ans) cerr << i << " ";
    cerr << endl;
    for(auto i : ans){
        if(mex.find(i) != mex.end()){
            mex.erase(i);
        } 
    }
    cout << *mex.begin() << endl;

    return 0;
}