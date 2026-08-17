#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>x;
        int r = (x-1)/m+1;
        cout <<min(r,n-r+1)<<endl;
    }
    return 0;
}