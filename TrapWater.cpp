#include <bits/stdc++.h>
using namespace std;

// TC-O(n)^2

int storeWater(vector<int>v)
{
    int n=v.size();
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=v[i];
        for(int j=i;j>=0;j--)
            lmax=max(lmax,v[j]);
        int rmax=v[i];
        for(int j=i+1;j<n;j++)
            rmax=max(rmax,v[j]);
           
        res+=min(lmax,rmax)-v[i];
    }
    return res;
}

int main()
{
    //cout<<"Hello World";
    vector<int>v={3,0,1,2,5};
    int res=storeWater(v);
    cout<<res;
    return 0;
}

//-----------------------------------------------------------------------------------//


// TC-O(n)
class Solution {
public:
    int trap(vector<int>& height) {
    vector<int>v=height;
    int n=v.size();
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=v[0];
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],v[i]);
    rmax[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],v[i]);
    for(int i=1;i<n-1;i++)
        res+=min(lmax[i],rmax[i])-v[i];
    return res;
    }
};


#include <bits/stdc++.h>
using namespace std;

int sand(vector<int>& height) {
    vector<int>v=height;
    int n=v.size();
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=v[0];
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],v[i]);
    rmax[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],v[i]);
    for(int i=1;i<n-1;i++)
        res+=min(lmax[i],rmax[i])-v[i];
    return res;
    }

int main()
{
    //cout<<"Hello World";
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    int res=sand(v);
    cout<<res;
    return 0;
}
