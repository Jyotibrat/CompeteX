#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
    int t, n, k;
    cin >>t;
    while(t--){
        cin >> n>>k;
        std::vector<ll> a(n), b(n);
        
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        for(int i = 0; i < n; i++)
            cin >> b[i];
            
        
        ll best = LLONG_MIN;
        std::vector<ll> c(n);
        
        for(int i = 0; i < n; i++){
            ll t_val=a[i];
            for(int j = 0; j < n; j++){
                ll d = t_val - a[j];
                c[j] = (d > 0) ? d * b[j] : 0;
            }
            std::nth_element(c.begin(), c.begin()+k, c.end());
            ll sum = 0;
            
            for(int m = 0; m<=k;m++)
                sum+=c[m];
                
            ll profit = (ll)k*t_val-sum;
            best=max(best, profit);
        }
        cout << best << endl;
    }
    
    
    return 0;
    
}