#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x;
    cin>>x;
    int a=x/5;
    if(x%5!=0)
        a+=1;
    cout<<a;
    return 0;
}