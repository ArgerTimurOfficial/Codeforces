#include <bits/stdc++.h>
using namespace std;
 
int factorial(int n){
    int ret = 1;
    for(int i = 1; i <= n; ++i){
        ret *= i;
    }
    return ret;
}
 
int main(){
    int a, b;
    cin >> a >> b;
    unsigned int answer = 0;
    answer = factorial(min(a, b));
    cout << answer;
}