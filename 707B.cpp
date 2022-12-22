#include <bits/stdc++.h>
#define ll long long
#define f(body) for(int i = 0; i < n; i++)
 
using namespace std;
 
int n, m, k, v[200000],u[200000],d[200000],a[200000],mn=2e9;
bool b[200000];
 
int main()
{
  cin >> n >> m >> k;
	for(int i = 0;i < m; i++)
		cin >> v[i] >> u[i] >> d[i];
	for(int i = 0; i < k; i++)
	{
		cin >> a[i];
		b[a[i]] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		if(((b[u[i]] && !b[v[i]]) || (b[v[i]] && !b[u[i]])) && d[i]<mn)
			mn = d[i];
	}
	if(mn == 2e9) { cout << -1; }
	else { cout << mn; }
	return 0;
}