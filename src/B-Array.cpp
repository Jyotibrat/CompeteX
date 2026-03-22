#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        vector<long long> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 0; i < n; i++){
            int c_mx = 0, c_mn=0;
            for(int j = i+1; j < n; j++){
                if(A[i] < A[j]) c_mx++;
                else if(A[i] > A[j]) c_mn++;
            }
            cout << max(c_mx,c_mn) << " ";
        }
        cout << endl;
    }

    return 0;
}