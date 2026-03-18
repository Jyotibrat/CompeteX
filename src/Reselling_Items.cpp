#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i =0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        
        int prf = 0;
        for(int i = 0; i < n; i++){
            if (i < k){
                if(a[i]>5){
                    prf+=(a[i]-5);
                }
            }
            else{
                if(a[i]>10){
                    prf+=(a[i]-10);
                }
            }
        }
        cout << prf << endl;
    }
    return 0;
}