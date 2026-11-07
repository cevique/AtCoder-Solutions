#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int q; cin >> q;
    
    int cards[n];
    for(int i=1; i<=n; i++){
        cards[i-1] = i;
    }
    
    int op[q];
    for(int i=0; i<q; i++){
        cin >> op[i];
    }
    
    for(int s=0; s<q; s++){
        int elem = op[s];
        for(int i=0; i<elem/2; i++){
            if(i==elem-1-i) continue;
            cards[i] = cards[i] + cards[elem-1-i];
            cards[elem-1-i] = cards[i] - cards[elem-1-i];
            cards[i] = cards[i] - cards[elem-1-i];
        }
        
        for(int i=0; i<elem; i++){
            cards[i] = -cards[i];
        }
        
    }
    
    for(int i=0; i<n; i++){
        cout << cards[i] << '\n';
    }
    
    return 0;
    
}