#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,n;
    bool b,temp1,temp2;
    cin >> t;
    vector<int> v1;
    while(t--){
        cin >> n;
        v1.resize(n);
        for(auto i{-1}; ++i<n;) cin >> v1[i];

        vector<int> v2, v3;
        for(auto i{-1}; ++i<n;){
            if(v2.empty() || \
                v2.back() != v1[i]){
                    v2.push_back(v1[i]);
                    v3.push_back(1);
                }else v3.back()++;
        }
        b=false;
        for(auto i{-1}; ++i<v2.size()-1;){
            if(v3[i]>=2 && v3[i+1]>=2){
                b=true;
                break;
            }
        }
        if(b){
            cout << v2.size()+2 <<endl;
            continue;
        }

        b=false;
        for(auto i{-1}; ++i<v2.size();){
            if(v3[i]>=2){
                temp1=false;
                if(i+1<v2.size()){
                    if(i+2>=v2.size() || v2[i] != v2[i+2]) temp1 = true;
                }

                temp2=false;
                if(i>0){
                    if(i-2<0 || v2[i-2] != v2[i]) temp2 = true;
                }
                if(temp1 || temp2){
                    b=true;
                    break;
                }
            }
        }
        if(b){
            cout << v2.size()+1<<endl;
            continue; 
        }
        cout << v2.size()<<endl;
    }
    return 0;
}