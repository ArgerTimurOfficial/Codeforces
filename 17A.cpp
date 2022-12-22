#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6+1;
vector<int>primesInMass;
 
vector<int> primeMass(int l, int r){
    int cnt = 0, ans = 0;
    vector<bool>primes(N, true);
    primes[0] = 0;
    primes[1] = 0;
    for(int i = 2; i <= r; ++i){
        if(primes[i])cnt++;
        for(int j = i*i; j <= r; j+=i){
            primes[j] = false;
        }
    }
    for(int i = 1; i <= r; ++i){
        if(i >= l && primes[i]){
            primesInMass.push_back(i);
        }
    }
    return primesInMass;
}
 
int answer(int n){
    int cnt = 0, ret=0;
    vector<bool>primes(N, true);
    primes[0] = 0;
    primes[1] = 0;
    for(int i = 2; i <= n; ++i){
        if(primes[i])cnt++;
        for(int j = i*i; j <= n; j+=i){
            primes[j] = false;
        }
    }
    vector<int>ans;
    for(int i = 2; i <= n; ++i){
        if(primes[i]){
            ans.push_back(i);
        }
    }
    for(int i = 0; i < ans.size(); ++i){
        if(ans[i] + ans[i+1] + 1 == n){
            ret++;
        }
    }
    if(ret == 0)return 0;
    else return 1;
}
 
int main(){
    int n, k, ans=0;
    cin >> n >> k;
    primeMass(2, n);
    for(int i = 0; i < primesInMass.size(); ++i){
        ans += answer(primesInMass[i]);
    }
    if(ans >= k)cout << "YES";
    else cout << "NO";
    return 0;
}