#include<bits/stdc++.h>
using namespace std;

vector<int>merge(vector<int>v1,vector<int>v2)
{
    int v1sz=v1.size();
    int v2sz=v2.size();
    int i=0,j=0,k=0;
    vector<int>sol(v1sz+v2sz);
    while(i<v1sz && j<v2sz)
    {
        if(v1[i]<v2[j])
            sol[k++]=v1[i++];
        else if(v1[i]>v2[j])
            sol[k++]=v2[j++];
    }      
    while(i<v1sz)
        sol[k++]=v1[i++];
    while(j<v2sz)
        sol[k++]=v2[j++];

    return sol;
}

int main()
{
    vector<int>v1={1,3,5,7};
    vector<int>v2={2,4,6,8};
    vector<int>res;
    res=merge(v1,v2);
    for(auto it:res)
        cout<<it<<" ";
    return 0;
}