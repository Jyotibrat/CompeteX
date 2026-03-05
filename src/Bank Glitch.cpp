#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(x>a){
            cout << a + b << endl;
        }else{
            int trade = a/x;
            int profit = y - x;
            cout << a + b + (trade * profit) << endl;
        }
    }
    return 0;
}