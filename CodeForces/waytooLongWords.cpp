#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    string a,ans;
    while(n--){
        cin>>a;
        int s=a.size();
        if(s>10){
            int t=s-2;
            ans=a[0]+to_string(t)+a[s-1];
        }else
        {
            ans=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}