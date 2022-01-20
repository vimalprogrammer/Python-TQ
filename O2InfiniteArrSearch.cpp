
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>v,int se,int s,int e)
{
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid]==se)
            return mid;
        if(v[mid]<se)
            s=mid+1;
        else 
            e=mid-1;
    }
    return -1;
}

int bsappr(vector<int>v,int se)
{
    if(v[0]==se)
        return 0;
    int i=1;
    while(v[i]<se)
    {
        i=i*2;
        if(v[i]==se) return i;
    }
    return binarySearch(v,se,(i/2)+1,i-1);
}

int main()
{
    vector<int>v={1,2,3,7,8,9,10,23,1561};
    int se=999;   
    int res=bsappr(v,se);
    cout<<res;
    return 0;
}
