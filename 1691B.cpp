#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9+7;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int>a(n); 
    for(int i = 0; i < n; i++)
      cin >> a[i];
    a.push_back(inf);
    bool poss = true;
    int cnt = 1, start_pos = 0;
    vector<int>ans;
    for(int i = 1; i <= n; i++){
      if(a[i] == a[i-1]){
        cnt++; continue;
      }
      if(cnt == 1){
        poss = false; 
        break;
      }
      ans.push_back(i); 
      for(int k = start_pos; k < i-1; k++)
        ans.push_back(k+1);
      cnt = 1;
      start_pos = i;
    }
    if(poss){
      for(int i = 0; i < ans.size(); ++i)
        cout << ans[i] << ' ';
      cout << '\n';
    }
    else if(!poss)
      cout << "-1\n";
  }
}