#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        std::vector<long long> cust(n);
        for(int i = 0; i < n; i++) 
            cin >> cust[i];
        
        long long p = 0, min_p = 0, max_p = 0;
        for(int i = 0; i < n; i++){
            p += cust[i];
            min_p = min(min_p, p);
            max_p = max(max_p, p);
        }
        
        long long l = max(0LL, -min_p);
        long long u = min((long long)k, (long long)k - max_p);
        
        if(l<=u) 
            cout << "yes" << endl;
        else
            cout << "no" << endl;
            
    }
    return 0;
}