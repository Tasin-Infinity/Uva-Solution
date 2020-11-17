#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,sum=0,sum1=0,res=0,ans=0;
    cin>>a>>b;
    if(b > a)
        cout<<"impossible"<<endl;
    else
    {
        sum = (a+b)/2;
        sum1 = (-b + a)/2;

        if((sum * 2 ==(a+b)) && (sum1 * 2 == (a-b)))
        {
            cout<<sum<<" "<<sum1<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
