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
 
int main(){
  int n;
  cin >> n;
  primeMass(2, n);
  vector<int>answer;
  while(n != 1){
    for(int i = 0; i < primesInMass.size(); ++i){
      if(n % primesInMass[i] == 0){
        while(n % primesInMass[i] == 0){
          n/=primesInMass[i];
          answer.push_back(primesInMass[i]);
        }
      }
    }
  }
  for(int i = 0; i < answer.size(); ++i){
    cout << answer[i] << ' ';
  }
}