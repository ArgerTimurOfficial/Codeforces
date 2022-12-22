#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0); std::cout.tie(0);
  long long n, k, a[400000];
	std::cin >> n >> k;
	long long m = n/2;
	for(int i = 0; i < n; i++) std::cin >> a[i];
	std::sort(a, a+n);
	int answer = a[m];
	a[n] = 13e10;
	for(int i = m; i <= n; i++){
		int l = i-m+1;
		if(l*(a[i + 1]-a[i])<=k)
		{
			k -= l*(a[i+1]-a[i]);
			answer += a[i+1]-a[i];
		}
		else{
			answer+=k/l; std::cout << answer;
			return 0;
		}
	}
}