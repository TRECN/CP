#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans;
        if(a%b==0){
            ans=0;
        }
        else
            ans=(b*((a/b)+1))-a;
        cout<<ans<<endl;
    }
    return 0;
}