#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
#define ll long long
#define fl 1.0
 
int answer = -1;
int main() {
  int n; ll v;
  cin >> n >> v;
  vector<int>a(n);
  ll sum = 0, t = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  if (sum >= v) {  
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
      int d = a[i] - a[0];
      t += d;
    }
    if (t < v)
    {
      int c = ceil(fl*(v-t)/n);
      answer = a[0] - c;
    } 
    else answer = a[0];
    t = 0;
  }
  cout << answer;
}