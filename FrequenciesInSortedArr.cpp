#include <bits/stdc++.h>
using namespace std;

int main()
{
//    cout<<"Hello World";
    int t;cin>>t;while(t--)
    {
        int a;
        vector<int>v;
        while(cin>>a)
        {
            v.emplace_back(a);
        }
        int n=v.size();
        int freq=1;
        for(int i=0;i<n;i++)
        {
            while(i<n && v[i]==v[i+1])
            {
                freq++;
                i++;
            }
            cout<<v[i]<<" : "<<freq<<"\n";
            freq=1;
        }
        if(n==1 && v[n-1]!=v[n-2])
            cout<<v[n-1]<<" : "<<freq<<"\n";
    }

    return 0;
}
