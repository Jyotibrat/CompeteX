#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        string S;
        cin >> S;

        vector<int> available;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                available.push_back(A[i]);
        }

        if (available.size() < K)
        {
            cout << -1 << "\n";
            continue;
        }

        sort(available.begin(), available.end());

        int sum = 0;
        for (int i = 0; i < K; i++)
            sum += available[i];

        cout << sum << "\n";
    }

    return 0;
}