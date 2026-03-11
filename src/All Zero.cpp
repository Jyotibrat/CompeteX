#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c%3==0 && b==(2*a+c/3)){
            std::cout << "yes" << std::endl;
        }else{
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}