#include <bits/stdc++.h>
#define ll long long
#define f(body) for(int i = 0; i < n; i++)
 
using namespace std;
 
int main()
{
  ll n, m;
  ll cnt = 1;
  cin >> n >> m;
  while(m % 2 == 0) { m/=2; cnt++; }
  cout << cnt;
}