#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll s=0;
    if(w%2==0)
        s=(w/2)*(w+1);
    else 
        s=w*((w+1)/2);
    ll sum=s*k;
    
    if(sum-n<=0)
        cout<<0;
    else 
        cout<<sum-n;
    return 0;
}
