#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p(int n){
    if(n==2)
        return 1;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;

    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(p(a+b))
            cout<<"Alice\n";
        else
            cout<<"Bob\n";


    }
    return 0;
}