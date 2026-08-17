#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int l,r;
    cin>>l>>r;
    for(auto i{l-1}; ++i<=r;){
        if(i%2==0){
            cout <<"yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}
