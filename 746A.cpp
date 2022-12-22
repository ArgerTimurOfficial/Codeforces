#include <iostream>
using namespace std;
 
int main() {
    int a, b, c, d = 0, min = 0, k = 0;
    cin >> a >> b >> c;
    if(4*a < 2*b){
        min = 4*a;
        d = a;
    }
    else{
        min = 2*b;
        d = b/2;
    }
    if(c < min){
        min =c;
        d = c/4;
    }
    k = d+ d*2 + d*4;
    if(k = d + d*2 + d*4){
        cout << k;
    }
    else {
        cout << 0;
    }
    
}