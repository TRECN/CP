#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n--){
        string s;
        cin>>s;
        int a=s.size();
        if(s[0]=='+'||s[a-1]=='+')
            x++;
        else    
            x--;
    }
    cout<<x;
    return 0;
}