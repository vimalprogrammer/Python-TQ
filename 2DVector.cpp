#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int r,c;cin>>r>>c;
    vector<vector<int>>v;
    
    for(int i=0;i<r;i++)
    {
        vector<int>dummy;
        for(int j=0;j<c;j++)
        {
            int a;cin>>a;
            dummy.push_back(a);
        }
        v.push_back(dummy);
    }
    return 0;
}
