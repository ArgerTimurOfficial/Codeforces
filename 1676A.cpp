#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  int n;
  cin >> n;
  for(int i=0; i<n; i++)
  {
    string s;
    cin >> s;
    if((int)s[0]+(int)s[1]+(int)s[2] == (int)s[3]+(int)s[4]+(int)s[5])
    {
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}