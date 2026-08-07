#include<iostream>
using namespace std;

int main(){
    int t,n,size;
    cin >> t;
    while(t--){
        cin >> n;
        size=n+1;
        bool p = true;
        if(size<2){
            cout << "NO" <<endl;
            continue;
        }
        for(auto i{2uz}; i*i<=size; ++i){
            if(size%i==0){
                p=false;
                break;
            }
        }
        if(p){
            cout << "YES" <<endl;
            continue;
        } 
        cout << "NO" <<endl;
    }
    return 0;
}