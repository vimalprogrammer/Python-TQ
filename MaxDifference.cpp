#include <bits/stdc++.h>
using namespace std;

//Max Difference ar[j]-a[i] such that j>i

int main()
{
    //cout<<"Hello World";
    
    //ar={2,3,10,6,4,8,1}
    //output:8  --> 10-2
    int t;cin>>t;
    while(t--)
    {
        vector<int>v;
        int a;
        while(cin>>a)
        {
            //int a;cin>>a;
            v.push_back(a);
        }
        int n=v.size();
        int res=v[1]-v[0];
        int minimum=v[0];
        for(int i=1;i<n;i++)
        {
            res=max(res,v[i]-minimum);
            minimum=min(v[i],minimum);
        }
        cout<<res<<"\n";
    }

    return 0;
}
