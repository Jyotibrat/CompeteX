#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t, n, ans, len;
    string s, temp;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> s;

        ans = n;
        for (auto i{0}; ++i<=(n - 2);) {
            temp = s;
            temp.erase(i, 1);
            len = 1;
            for (auto j{0}; ++j<temp.size();) {
                if (temp[j] != temp[j - 1]) len++;
            }
            ans = min(ans, len);
        }
        cout << ans << endl;
    }
    return 0;
}