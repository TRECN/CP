#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i==1)
            cout<<"I hate ";
        else if(i%2==0)
            cout<<"that I love ";
        else 
            cout<<"that I hate ";
        i++;
    }
    cout<<"it";
    return 0;
}