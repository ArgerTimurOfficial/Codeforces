#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    vector<string>mas = {"January", "February", 
      "March", "April", "May", "June", "July", "August",
      "September", "October", "November", "December"
    };
    string month;
    cin >> month;
    int ms;
    cin >> ms;
    int idx = 0;
    for(int i = 1; i <= mas.size(); i++)
    {
      if(mas[i] == month)idx=i;
    }
    cout << mas[(idx+ms)%12];
}