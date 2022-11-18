#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        int a[m];
        set<int>S;
        
        for(int i=0;i<m;i++){
            cin>>a[i];
            S.insert(a[i]);
        }
        
        sort(a,a+m);
        int M=a[m-1];
        int N=1;
        int sum=0;
        while(N){
            if(S.find(N)!=S.end()){
                N++;
                continue;
            }
            sum+=N;
            if(sum>s){
                cout<<"NO\n";
                break;
            }
            S.insert(N);
            if(sum==s){
                int f=0;
                for(int i=1;i<=M;i++){
                    if(S.find(i)!=S.end())
                    continue;
                    f=1;
                    break;
                }
                if(!f)
                    cout<<"YES\n";
                else    
                    cout<<"NO\n";
                break;
            }
            N++;
        }
    }
    return 0;
}