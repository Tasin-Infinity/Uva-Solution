
#include <bits/stdc++.h>
using namespace std;

int largest_subarray(int *a, int n)
{
    map<int, int> index;
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {

        j = max(index[a[i]], j);

      //  cout<<index[a[i]]<<"||"<<j<<"  ";
        ans = max(ans, i - j + 1);

       // cout<<"(a = "<<i<<"-"<<j+1<<" "<<ans<<")";
        index[a[i]] = i + 1;

       // cout<< index[a[i]]<<"   ";
    }
    return ans;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0; i<x; i++)
            cin>>arr[i];
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << largest_subarray(arr, n)<<endl;
    }
    return 0;
}
