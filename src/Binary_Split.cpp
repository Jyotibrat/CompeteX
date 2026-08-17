#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    string s,ans,cur;
    std::cin >> t;
    while(t--){
        cin>>n>>s;
        std::vector<string> r;
        for(auto i{-1}; ++i<n;){
            int j =i;
            while(j<n&&s[j]==s[i])j++;
            r.push_back(s.substr(i,j-i));
            i=j-1;
        }
        if(r.size()==1){
            cout << s<<endl;
            continue;
        }
        ans=s;
        for(auto i{0}; i+1<r.size();i++){
            cur=r[i]+r[i+1];
            if(cur<ans) ans=cur;
        }
        cout <<ans<<endl;
    }
    return 0;
}