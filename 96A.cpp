#include <bits/stdc++.h>
using namespace std;

int main(){
  string players; cin >> players;
  string var1 = "0000000";
  string var2 = "1111111";
  int bad_segment1 = players.find(var1)+1;
  int bad_segment2 = players.find(var2)+1;
  if(bad_segment1){cout << "YES"; return 0;}
  if(bad_segment2){cout << "YES"; return 0;}
  else{cout << "NO"; return 0;}
};