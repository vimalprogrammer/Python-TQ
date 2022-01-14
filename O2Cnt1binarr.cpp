#include <bits/stdc++.h>
using namespace std;
//binary Search approach
int cnt1(vector<int>v)
{
    int n=v.size();
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid]==0)
            s=mid+1;
        if(mid==0 || v[mid-1]!=v[mid])
            return n-mid;
        else
            e=mid-1; 
    }
    return -1;
}

int main()
{
    //cout<<"Hello World";
    /*
    a[]={0,0,1,1,1,1,1}
    count 1's in a sorted binary array
    1.a[mid]==0
        1.1 s=mid+1
    2.if(mid==0 !! a[mid-1]!=a[mid])
        2.1 return mid-len+mid-1
    3.else
        3.1 e=mid-1
    */
    vector<int>v={0,0,0,1,1,1,1};
    int res=cnt1(v);
    cout<<res;
    return 0;
}
