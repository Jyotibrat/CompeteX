#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    std::cin >> t;
    while(t--){
        int n;
        cin >> n;
        std::vector<int> v(n);
        for(int i =0;i<n;i++)
            cin >> v[i];
        map<int,int> mp;
        int c=0;
        for(int i=0;i<n;i++){
            int val=v[i]-i;
            mp[val]++;
        }
        
        for(auto &it: mp){
            int f= it.second;
            c+=(f*(f-1))/2;
        }
        std::cout << c << std::endl;
    }
    return 0;
}