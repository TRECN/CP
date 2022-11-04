#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,sum,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        j=a[0];
        sort(a,a+n);
        if(a[0]==j)
            cout<<"Bob"<<endl;
        else 
            cout<<"Alice"<<endl;
    }
    return 0;
}