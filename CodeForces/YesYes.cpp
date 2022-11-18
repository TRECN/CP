#include<bits/stdc++.h>
using namespace std;
#define ll long long

string yes(){
    string y="Yes";
    for(int i=1;i<20;i++){
        y+="Yes";
    }
    return y;
} 
int main()
{
    string Yes=yes();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s; 
        int res;
        if((res=Yes.find(s,0))==string::npos)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}