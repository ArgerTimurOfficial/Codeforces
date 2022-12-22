#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n; cin >> n;
  vector<int>a(n);
  for(int i = 0; i < n; i++)cin >> a[i];
  int m; cin >> m;
  vector<int>b(m);
  for(int i = 0; i < m; i++)cin >> b[i];
  
  vector<int>pref(n);
  pref[0] = a[0];
  for(int i = 1; i < n; i++)
    pref[i] = pref[i-1]+a[i];
    
  for(int i = 0; i < m; i++)
  {
    int l = -1, r = n;
    int m1;
    while(l != r-1)
    {
      m1 = (l+r)/2;
      if(b[i] <= pref[m1])r = m1;
      else l = m1;
    }
    cout << r+1 << '\n';
  }
}