#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,c=0;
    cin >> t;
    while(t%10!=0 || c==0){
        c++;
        t++;
    }
    cout << c;
    return 0;
}