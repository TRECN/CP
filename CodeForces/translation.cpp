#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a="YES";
    string s;
    cin>>s;
    string t;
    cin>>t;
    stack<char>ch;
    for(auto i:t){
        ch.push(i);
    }
    for(auto i:s){
        if(i!=ch.top()){
            a="NO";
            break;
        }
        ch.pop();
    }
    cout<<a;
    return 0;
}