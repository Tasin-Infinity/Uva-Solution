#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main()
{
    map<string,int> mp;
    map<string,int>::iterator itr;
    int t;
    cin>>t;
    string arr[t];
     for(int i=0; i<t; i++)
     {
         string str,str1;
         cin>>str;
         getline(cin,str1);
         arr[i] = str;
     }
     sort(arr, arr+t);
     for(int i=0; i<t; i++)
     {
         mp[arr[i]]++;
     }
     for (itr = mp.begin(); itr != mp.end(); ++itr)
           cout<< itr->first<<" "<<itr->second<<endl;

}

