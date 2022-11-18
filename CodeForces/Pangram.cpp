#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>S;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(auto i:s){
        S.insert(i);
    }
    if(S.size()==26)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}