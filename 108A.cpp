#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  string s;
  cin >> s;
  vector<string>palindroms = {
    "00:00", "01:10", "02:20", "03:30",
    "04:40", "05:50", "10:01", "11:11",
    "12:21", "13:31", "14:41", "15:51",
    "20:02", "21:12", "22:22", "23:32"
  };
  vector<int>nums = {
    0, 110, 220, 330,
    440, 550, 1001, 1111,
    1221, 1331, 1441, 1551,
    2002, 2112, 2222, 2332
  };
  string t;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] != ':')
    {
      t.push_back(s[i]);
    }
  }
  int number = atoi(t.c_str());
  for(int i = 0; i < palindroms.size(); i++)
  {
    if(s == palindroms[i]){
      cout << palindroms[(i+1)%16];
      return 0;
    }
  }
  for(int i = 0; i < palindroms.size(); i++)
  {
    if(number > 2332 && number<= 2359){cout << "00:00"; 
      return 0;}
    if(s != palindroms[i]){
      if(number-nums[i]>0 && number-nums[i+1]<0)
      {
        cout << palindroms[(i+1)%16];
      }
    }
  }
}