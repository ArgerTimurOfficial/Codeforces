#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main(){
  long long t; cin >> t;
  while(t--)
  {
    long long n; cin >> n;
    vector<pair<long long, long long> > t(n);
    for(long long p = 0; p < n; ++p) 
      cin >> t[p].first;
    for(long long p = 0; p < n; ++p)
      cin >> t[p].second;
    sort(t.begin(), t.end());
    for(long long p = n-2; p >= 0; --p) t[p].second += t[p + 1].second;
    long long ans(t[0].second);
    for(long long p = 0; p < n; ++p)
    {
      long long pt = (p+1 < n) ? t[p + 1].second:0;
      long long dt = t[p].first;
      long long to = (pt > dt) ? pt:dt;
      ans = (ans < to) ? ans:to;
      if(dt > pt) break;
    }
    cout << ans << '\n';
  }
}