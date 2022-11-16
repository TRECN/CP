#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=count(a.begin(),a.end(),k);
        if(f==0)
            cout<<"No\n";
        else if(f==1 && n!=1 &&a[n-1]==k)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}