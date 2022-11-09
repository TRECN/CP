#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i;
    cin>>i;
    for(int x=i+1;;x++){

        int o=x%10;
        int t=x/10%10;
        int h=x/100%10;
        int th=x/1000;
        if(o!=t&&o!=h&&o!=th&&t!=h&&t!=th&h!=th){
            i=x;
            break;
        }
    }
    cout<<i;
    return 0;
}