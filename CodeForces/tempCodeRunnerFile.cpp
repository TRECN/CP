#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0,i=0,j=0;
        if(n%2==0){
            m=n/2;
            i=2;
            j=6;
            cout<<m<<endl;
            while(m--){
                cout<<i<<" "<<j<<endl;
                i+=6;
                j+=6;
            }
        }
        else{
            m=(n+1)/2;
            cout<<m<<endl;
            m--;
            cout<<1<<" "<<2<<endl;
            i=5;
            j=9;
            while(m--){
                cout<<i<<" "<<j<<endl;
                i+=6;
                j+=6;
            }
        }
        
        
    }
    return 0;
}