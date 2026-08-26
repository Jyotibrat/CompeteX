#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
	// your code goes here
    int t,a,b, p, q, r,rU,rR;
    cin >> t;
    ll ans, rC, uC, dC, tC;
    while (t--) {
        cin>>a>>b>>p>>q>>r;

        ans = LLONG_MAX;

        for (int i{-1}; ++i <= min(a, b);) {
            rR = a-i;
            rU = b-i;

            rC = ((rR + 1) / 2) * 1LL * p;
            uC = ((rU + 1) / 2) * 1LL * q;
            dC = i * 1LL * r;
            tC = rC + uC + dC;

            ans = min(ans, tC);
        }
        cout << ans <<endl;
    }
    return 0;
}
