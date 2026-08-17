#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t, no, na;
    cin>>t;
    while (t--){
        cin >>no>>na;
        vector<bool> strtlet(26,false);

        for(auto i{-1}; ++i<no;){
            string word;
            cin >>word;
            strtlet[word[0]-'a']=true;
        }

        bool fa=true;
        for(auto i{-1}; ++i<na;){
            string word;
            cin>>word;
            for(auto ch:word){
                if(!strtlet[ch-'A']) fa=false;
            }
        }
        if(fa) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;    
}