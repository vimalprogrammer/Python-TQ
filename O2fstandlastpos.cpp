#include <bits/stdc++.h>
using namespace std;

    vector<int> searchRange(vector<int>& v, int t) {
    auto it_lower=lower_bound(v.begin(),v.end(),t);
    if(it_lower==v.end() || *it_lower!=t)
        return {-1,-1};
    auto it_upper=upper_bound(v.begin(),v.end(),t);
    int start=it_lower-v.begin();
    int end=it_upper-v.begin()-1;
    return {start,end};
    }
int main()
{
    //cout<<"Hello World";
    vector<int>v={4,7,9,9,9,9,10};
    vector<int>res=searchRange(v,9);
    for(auto it:res)
        cout<<it<<" ";
    return 0;
}
