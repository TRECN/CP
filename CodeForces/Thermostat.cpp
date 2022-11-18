#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--){
        int  l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;
        int a1=abs(a-l);
        int a2=abs(a-r);
        int a3=abs(b-l);
        int a4=abs(r-b);
        if(a==b)
            cout<<"0\n";
        else if(abs(a-b)>=x)
            cout<<"1\n";
        else if((a1<x && a2<x)||(a3<x&&a4<x))
            cout<<"-1\n";
        else{
            if(a1<x){
                if(a4>=x)
                    cout<<"2\n";
                else
                    cout<<"3\n";

            }
            else if(a2<x){
                if(a3>=x)
                    cout<<"2\n";
                else 
                    cout<<"3\n";
            }
            else
                cout<<"2\n";
        } 
    }
    return 0;
}