#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin >>t;
    while(t--){
        cin >>n;
        if(n%3==0){
            cout<<0<<endl;
            continue;
        } 
        else if(n%3==2){
            cout<<1<<endl;
            continue;
        } 
        int nxt = ((n/5)+1)*5;
        if(nxt%3==0) cout << 1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}