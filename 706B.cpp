#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
    cin>>b[i];
     
    sort(b,b+a);
     
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
        int e;
        cin>>e;
        cout << upper_bound(b,b+a,e)-b << endl;
    }
}