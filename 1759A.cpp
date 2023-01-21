#include <bits/stdc++.h>
using namespace std;
const string str = "Yes";
int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int sh = 0;
    for(int i = 0; i < str.size(); i++){
      if(str[i] == s[0]){
        sh = i; break;
      }
    }
    bool ans = true;
    for(int i = 0; ans && i < s.size(); i++){
      if(s[i] != str[(i+sh) % 3]){
        ans = false;
      }
    }
    if(ans == false){
      cout << "NO\n";
    }
    else{
      cout << "YES\n";
    }
  }
}