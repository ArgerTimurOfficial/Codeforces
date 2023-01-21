#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int q; cin >> q;
  while(q--){
    int n, mxa = 0, mxb = 0; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
      cin >> a[i];
      if(a[i] >= mxa){
        mxb = mxa;
        mxa = a[i];
      }
      else if(a[i] > mxb){
        mxb = a[i];
      }
    }
    for(int i = 0; i < n; i++){
      if(a[i] == mxa){
        cout << a[i] - mxb << ' ';
      }
      else{
        cout << a[i] - mxa << ' ';
      }
    }
    cout << '\n';
  }
}