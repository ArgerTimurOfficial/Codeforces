#include <bits/stdc++.h>
using namespace std;
int mi(int a, int b)
{
  if(a > b)return b;
  else return a;
}
int main() 
{
  int n, a, b;
  cin >> n >> a>> b;
  int l=0, r=mi(a,b)+1;
  while(l+1 != r)
  {
    int m = (l+r)/2;
    if(a/m+b/m >= n)l=m;
    else r=m;
  }
  cout << l;
}