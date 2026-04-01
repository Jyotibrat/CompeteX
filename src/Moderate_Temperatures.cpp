#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        std::vector<int> v(n);
        for(int i =0; i < n; i++){
            cin >> v[i];
        }
        auto minmax= minmax_element(v.begin(), v.end());
        int max_val = *minmax.first;
        int min_val = *minmax.second;
        int c=0;
        for(int i =0; i < n;i++){
            if(v[i] != max_val && v[i]!=min_val)
                c++;
        }
        cout << c<< endl;
    }
    
    return 0;
}