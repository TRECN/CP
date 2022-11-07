#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j=a[k-1];
    sort(a,a+n);
    int count=0;
    for(auto i:a){
        if(i>=j&&i>0)
            count++;
    }
    cout<<count;
    return 0;
}