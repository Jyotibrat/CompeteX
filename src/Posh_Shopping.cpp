#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,ans;
    cin >>t;
    while(t--){
        cin>>n;
        
        std::vector<int> v(n);
        ans=0;
        
        for(auto i{-1}; ++i<n;) cin >> v[i];
        
        for(auto i{-1}; ++i<n;) ans=max(ans,v[i]);
    
        for(auto i{-1}; ++i<n;){
            for(auto j{i}; ++j<n;){
                if(v[i] <= v[j]) ans=max(ans, v[i] + v[j]);
            }
        }
        cout << ans<<endl;
    }
    return 0;
}