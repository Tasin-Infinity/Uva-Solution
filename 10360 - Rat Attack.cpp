#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int d,n,sum=0,cnt=0,res=0,res2=0;
    cin>>d>>n;
    int arrx[n],arry[n],arri[n];
    for(int i=0; i<n; i++)
    {
        cin>>arrx[i]>>arry[i]>>arri[i];
    }
    int len = d*2;
    for(int i=0; i<n; i++)
    {
        if(abs(arrx[i]-arrx[i+1]) <= len && abs(arry[i] - arry[i]) <= len)
        {
            sum +=
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
