#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define f(body) for(int i = 0; i < n; i++)
#define f(body_1) for(int j = 0; j < n; j++)
 
using namespace std;
 
int main(){
  int n,a,b;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&b);
    if(a!=b){
      puts("Happy Alex");
      return 0;
    }
  }
  puts("Poor Alex");
  return 0;
}