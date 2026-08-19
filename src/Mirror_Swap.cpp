#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,s;
    cin>>t;
    while(t--){
        s=0;
        cin>>n;
        std::vector<int> v(2*n);
        for(auto i{-1}; ++i<2*n;)cin>>v[i];
        
        for(auto i{-1};++i<n;){
            s+=max(v[i], v[2*n-1-i]);
        }
        cout << s<<endl;;
    }
    return 0;
}
