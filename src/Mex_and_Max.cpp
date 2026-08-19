#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 998244353;

int main() {
    // your code goes here
    int t, n;
    cin>>t;
    while (t--) {
        ll ans = 0;
        ll product = 1;
        
        cin>>n;

        vector<int> freq(n + 2, 0);
        vector<ll> pow2(n + 2, 1);

        for (auto i{-1}; ++i < n;) {
            int x;
            cin>>x;
            freq[x]++;
        }

        for (int i = 1; i <= n + 1; i++) pow2[i] = (pow2[i - 1] * 2) % MOD;

        if (freq[1] > 0) {
            ans = (ans + pow2[freq[1]] - 1 + MOD) % MOD;
        }

        for (int m = 1; m <= n + 1; m++) {
            if (freq[m - 1] == 0) break;

            product = product * (pow2[freq[m - 1]] - 1 + MOD) % MOD;

            ans = (ans + product) % MOD;

            if (freq[m + 1] > 0) {
                ll extra = (pow2[freq[m + 1]] - 1 + MOD) % MOD;
                ans = (ans + product * extra) % MOD;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}