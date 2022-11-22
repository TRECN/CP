#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prev=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            if(prev>0)
            prev--;
                else
            sum++;
        }
        else
            prev+=arr[i];
        
    }
    cout<<sum;
    return 0;
}