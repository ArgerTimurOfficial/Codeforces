#include <bits/stdc++.h>
#define ll long long
#define fl(i,n) for(int i = 0; i < n; i++)
 
using namespace std;
 
void asquare()
{
    ll n,h;
    cin>>n>>h;
    ll arr[n];
    fl(i,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(h<=arr[n-1])
    cout<<"1\n";
    else 
    {
        ll c=0;
        c+=2*(h/(arr[n-1]+arr[n-2]));
        if(h%(arr[n-1]+arr[n-2])==0)c+=0;
        else if(h%(arr[n-1]+arr[n-2])<=arr[n-1])c++;
        else c+=2;
        cout<<c<<"\n";
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}