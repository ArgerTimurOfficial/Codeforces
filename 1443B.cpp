#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long t; cin >> t;
  while(t--)
  {
    long long a, b; 
    cin >> a >> b;
    string str; 
    cin >> str;
    vector<long long> g;
    long d(0), fl(false);
    for(int p = 0; p < str.size(); p++)
    {
      if(str[p]=='1')
      {
        if(fl!=true)fl = true;
        else if(p > 0 && str[p - 1]=='0')
          g.push_back(d);
        d = 0;
      }
      else if(str[p] == '0')d++;
    }
    long long answer(a * fl);
    for(long p = 0; p < g.size(); p++)
    {
      int current = g[p]*b;
      current = (current < a) ? current : a;
    answer += current;
    }
  cout << answer << '\n';
  }
}