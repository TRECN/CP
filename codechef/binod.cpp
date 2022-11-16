#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[64][n];
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            for(int j=0; j<64; j++)
            {
                a[j][i]=(int)(x%2);
                x/=2;
            }

        }
        for(int i=0; i<64; i++)
        {
            long long count=0;
            for(int j=0; j<n; j++)
            {
                count+=a[i][j];
                a[i][j]=count;
            }

        }

        while(q--)
        {
            int l1,r1,l2,r2,k;
            cin>>k>>l1>>r1>>l2>>r2;
            l1--;
            l2--;
            r1--;
            r2--;
            int tf=r1-l1+1;
            int ts=r2-l2+1;
            int tfo,tso;
            if(l1==0)
            {
                tfo=a[k][r1];
            }
            else
            {
                tfo=a[k][r1]-a[k][l1-1];
            }
            if(l2==0)
            {
                tso=a[k][r2];
            }
            else tso=a[k][r2]-a[k][l2-1];
            long sum=(long)(tf-tfo)*(long)(tso)+ (long)(tfo)*(long)(ts-tso);
            cout<<sum<<endl;

        }
    }
  return 0;

}