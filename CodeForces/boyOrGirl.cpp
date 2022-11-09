#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    cin>>a;
    set<char>s;
    for(auto i:a){
        s.insert(i);
    }
    int k=s.size();
    if(k%2!=0)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}