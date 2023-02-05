#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const float PI = 3.1415;
const float PHI = 1.61803;

void GetAnswer(){
    int n; cin >> n;
	string s;
	cin >> s;
	int l = 0, r = n - 1, ans = n;
	while (s[l] != s[r] && ans > 0){
        l++; r--; ans -= 2;
    }
	cout << ans << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        GetAnswer();
    }
}