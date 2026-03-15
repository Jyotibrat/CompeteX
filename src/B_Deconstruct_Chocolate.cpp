#include<iostream>
using namespace std;

int main(){
    
    int r, c, q;
    cin >> r >> c >> q;

    while(q--){
        int t, rcq, choco;
        cin >> t >> rcq;
        switch(t){
            case 1:
                if(r>rcq){
                    choco = rcq * c;
                    r -= rcq;
                    cout << choco << endl;
                    break;
                }
                break;
            case 2:
                if(c>rcq){
                    choco = rcq * r;
                    c -= rcq;
                    cout << choco << endl;
                    break;
                }
        }
    }

    return 0;
}