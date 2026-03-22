#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        for(int i = 0; i < n; i++){
            if(c < A[i]) break;
            else{
                long long mn = min(k, c-A[i]);
                A[i] += mn;
                k -= mn;
                c += A[i];
            }
        }
        cout << c << endl;
    }

    return 0;
}