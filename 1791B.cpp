#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
const float PI = 3.1415;
const float PHI = 1.61803;
 
void GetAnswer(){
    pair<int, int>point = {0, 0};
    int n; cin >> n;
    string directory;
    cin >> directory;
    for(int i = 0; i < n; ++i){
        if(directory[i] == 'R'){
            point.first += 1;
        }
        if(directory[i] == 'L'){
            point.first -= 1;
        }
        if(directory[i] == 'U'){
            point.second += 1;
        }
        if(directory[i] == 'D'){
            point.second -= 1;
        }
        if(point.first == 1 && point.second == 1){
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