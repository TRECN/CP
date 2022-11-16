#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<n*2;i++){
            cin>>a[i];
        }
        map<int,int>m;
        for(auto i:a){
            m[i]++;
        }
        bool f=true;
        for(auto i:m){
            if(i.second>2){
                f=false;
                break;
            }
        }
        if(f)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
    return 0;
}