#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //\n is faster than endl
    int a, b;
    string x;
    cin >> a >> b >> x;
    cout<<a<<b<<x;
    //faster
    int d, e;
    scanf("%d %d", &d, &e);
    printf("%d%d\n",d,e);

    //for string
    string s;
    getline(cin,s);
    cout<<s;
}