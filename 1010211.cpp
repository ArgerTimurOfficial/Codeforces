#include <iostream>
using namespace std;
int main(){
  int l = 0, r = 1000001, m = 0;
  bool ret = true;
  while(l != r-1){
    cout << (l+r)/2 << endl;
    string s;
    cin >> s;
    if(s == ">="){
      l = (l+r)/2;
    }
    else{
      r = (l+r)/2;
    }
  }
  cout << "! " << l;
}