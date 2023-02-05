#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
  int n;
  cin >> n;
  string s;
  for(int i = 0; i < n; i++){
    cin >> s;
    if(s.size() % 2 == 1){
      cout << "NO" << endl;
    }
    else if(s.size() % 2 == 0){
      string a;
      string b;
      for(int j = 0; j < s.size()/2; j++){
        a.push_back(s[j]);
      }
      for(int k = s.size()/2; k < s.size(); k++){
        b.push_back(s[k]);
      }
      if(a == b){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
  }
}