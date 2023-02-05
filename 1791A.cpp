#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const float PI = 3.1415;
const float PHI = 1.61803;

string cf = "codeforces";

void GetAnswer(){
    char c;
    cin >> c;
    for(char x : cf){
        if(c == x){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        GetAnswer();
    }
}