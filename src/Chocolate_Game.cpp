#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, sum, odd;

    cin >> t;

    while (t--) {
        cin >> n;

        sum = 0;
        odd = 0;

        for (auto i{-1}; ++i < n;) {
            int x;
            cin >> x;

            sum += x;

            if (x % 2 != 0)
                odd++;
        }

        if (odd == 0) {
            cout << sum << '\n';
        }
        else if (sum % 2 != 0) {
            cout << odd / 2 << '\n';
        }
        else {
            cout << sum - odd / 2 << '\n';
        }
    }

    return 0;
}