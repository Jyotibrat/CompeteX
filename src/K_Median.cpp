#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    std::cin >> t;
    while(t--){
        int n,k;
        std::cin >> n>>k;
        std::vector<int> a(n);
        for(auto &i:a){
            std::cin >> i;
        }
        std::sort(a.begin(), a.end());
        int m =n-k;
        std::set<int> med;
        for(int i =0; i+m<=n;i++){
            int id=i+(m-1)/2;
            med.insert(a[id]);
        }
        for(auto x: med){
            cout <<x<<" " ;
        }
        std::cout << std::endl;
    }
    return 0;
}