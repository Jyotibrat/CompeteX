#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> threshold(n);
        for(int i = 0; i < n; i++){
            cin >> threshold[i];
        }

        vector<int> Balloons(n,0);

        int played = 0;

        for(int i = 0; i < n; i++){

            if(played >= threshold[i]){
                Balloons[i] = threshold[i];
            }
            else{
                Balloons[i] = played;
                played++;
            }
        }

        for(int i = 0; i < n; i++){
            cout << Balloons[i] << " ";
        }

        cout << endl;
    }

    return 0;
}