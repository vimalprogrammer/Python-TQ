#include <bits/stdc++.h>
using namespace std;

void returntoVctor(vector<int>&v)
{
    int temp=v[0];
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        v[i]=v[i+1];
    }
    v[n-1]=temp;
}

vector<int>LeftRotate(vector<int>&v,int times)
{
    
    for(int i=0;i<times;i++)
    {
        returntoVctor(v);
    }
    
    return v;
}


int main()
{
    //cout<<"Hello World";
    int n,times;cin>>n>>times;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    vector<int>v2=LeftRotate(v,times);
    for(int i=0;i<n;i++)
        cout<<v2[i]<<" ";
    return 0;
}
