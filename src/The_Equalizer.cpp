#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int sum =0;
        vector<int> a(n);
        for(auto &i: a){
            cin>>i;
            sum+=i;
        }
        int el = n*k;
        if(el%2==0 || sum%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}