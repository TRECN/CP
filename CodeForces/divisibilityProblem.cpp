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
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            int i=a/b;
            int k=b*(i+1);
            int ans=k-a;
            cout<<ans<<endl;
        }
    }
    return 0;
}