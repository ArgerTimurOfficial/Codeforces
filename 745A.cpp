#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s, a;
	cin >> s;
	a = s + s;
	cout << a.find(s, 1) << endl;
}