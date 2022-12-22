#include <iostream>
#include <string>
 
#define ct cout
#define cn cin
#define we while
#define fr for
#define tostr to_string
 
using namespace std;
 
const char zero = '0';
 
int function(string number, int l, int answer){};
 
int main(){
    int l=0;
    int answer=0;
    string number; cn >> number;
    we(number.size() > 1) 
    {
      fr(auto x:number){
        l+=x-zero;
      }
      number = tostr(l);
      l = 0;
      answer++;
    }
    ct << answer;
};