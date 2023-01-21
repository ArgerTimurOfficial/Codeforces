#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int q; cin >> q;
  for(int k = 0; k < q; ++k){
    int n; cin >> n;
    vector<int>a(n); 
    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    if(a[0] == a.back()){
      cout << "NO\n";
    }
    else{
      cout << "YES\n" << a.back() << ' ';
      for(int i = 0; i < n-1; ++i)
        cout << a[i] << ' ';
      cout << '\n';
    }
  }
  return 0;
}