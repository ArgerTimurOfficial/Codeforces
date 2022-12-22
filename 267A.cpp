#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int q; cin >> q;
    for(int i = 0; i < q; ++i){
        int a, b;
        cin >> a >> b;
        int mi = min(a, b), ma = max(a, b), ans = 0;
        while(mi != ma && mi > 0 && ma >= 0){
            ans += ma/mi;
            ma = ma % mi;
            if(mi > ma){
                int tmp = mi;
                mi = ma;
                ma = tmp;
            }
        }
        if(mi == ma && mi != 0)
            ans+=1;
        cout << ans << '\n';
    }
}