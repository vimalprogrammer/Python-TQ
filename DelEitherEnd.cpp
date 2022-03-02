
//Delete either ends of a string in k size
//n=9 ar=[1,2,3,4,,5,6,7,8,9]
//output=6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    // int n,k;cin>>n>>k;
    // vector<int>v;
    // for(int i=0;i<n;i++)
    // {
    //     int a;cin>>a;
    //     v.push_back(a);
    // }
    int n=15,k=3;
    vector<int>v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int cnt=1;
    vector<int>dummy;
    for(int i=0;i<n/k;i++)
    {
        v.erase(v.begin(),v.begin()+3);
        reverse(v.begin(),v.end());
        cnt++;
        if(cnt==n/k)
            dummy=v;
            
    }
    cout<<dummy[k-1]<<"\n";
    return 0;
}