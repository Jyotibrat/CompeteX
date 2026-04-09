#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,a,b,c;
        cin >>n>>m>>a>>b>>c;
        int cost = min(n,m)*c;
        if(min(n,m) ==m){
            
            int temp = n-m;
            cost += temp*a;
        }
        else{
            int temp = m-n;
            cost+=temp*b;
        }
         std::cout << cost << std::endl;
            
    }

    return 0;
}
