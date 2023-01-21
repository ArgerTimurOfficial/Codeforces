#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int q; cin >> q;
  for(int k = 0; k < q; ++k){
    int n, s;
    cin >> n >> s;
    vector<int>a(n); 
    int cnt = 0;
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      if(cnt <= a[i]){
        cnt = a[i];
      }
    }
    vector<bool>bool_mass(cnt+1, false);
    for(int i = 0; i < n; ++i){
      bool_mass[a[i]] = true;
    }
    for(long i = 1; i < bool_mass.size(); i++){
      if(bool_mass[i] == false)
        s -= i;
    }
    while(s > 0){
      s -= ++cnt;
    }
    if(s == 0)cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}