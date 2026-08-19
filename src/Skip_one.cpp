#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    // your code goes here
    int t,n,mx,ans;
    ll k,s;
    cin>>t;
    while(t--){
        s=0,mx=0,ans=0;
        cin>>n>>k;
        for(auto i{-1}; ++i<n;){
            int temp;
            cin>>temp;
            s+=temp;
            mx=max(mx,temp);
            if(s-mx<=k) ans=1+i;
        }
        cout <<ans<<endl;
    }
    return 0;
}