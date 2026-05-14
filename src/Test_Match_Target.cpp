#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,z;
    cin >>x>>y>>z;
    if((x+z)>y){
        cout << (x+z)-y+1<<endl;    
    }else if((x+z)==y){
        cout << 1<< endl;
    }else{
        cout << 0<< endl;
    }
    return 0;
}