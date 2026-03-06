#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> Balloons(n,0);
        vector<bool> present(n,true);
        vector<int> threshold(n);
        for(int i = 0; i<n;i++){
            cin >> threshold[i];
        }
        for(int i = 0; i < n; i++){
            if(!present[i]) continue;
            for(int j = 0; j < n; j++){
                if(j!=i&&present[j]){
                    Balloons[j]++;
                }
            }
            
            present[i] = false;
            for(int j  = 0; j < n; j++){
                if(present[j] &&Balloons[j] >= threshold[j]){
                    present[j] =false;
                }
            }
        }
        for(int i = 0; i<n;i++){
            cout << Balloons[i] << " ";
        }
        cout << endl;
    }
    return 0;
}