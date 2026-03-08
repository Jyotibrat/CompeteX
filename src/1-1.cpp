#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, maximum = 0, minimum = 0;
        cin >> n;
        string s;
        cin >> s;


        for(int i = 0; i < n; i++){
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] == '0'){
                s[i] = '1';
                maximum++;
            }else if(s[i] == '1')
                maximum++;
        }
        
        for(int i = 0; i < n; i++){
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] == '1'){
                s[i] = '0';
            }else if(s[i] == '1')
                minimum++;
        }
        cout << minimum << ' ' << maximum << endl;
    }
    return 0;
}