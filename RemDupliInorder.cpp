#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    vector<int>v={2,3,1,4,5,2,3,5,6,7};
    map<int,int>mp;
    for(int i:v)
    {
        if(mp.find(i)==mp.end())
        {
            mp[i]=1;
            cout<<i<<" ";
        }
    }
    return 0;
}
