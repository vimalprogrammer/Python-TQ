#include<bits/stdc++.h>
using namespace std;
    
    vector<vector<int>>vec;
    vector<vector<int>>Permutations(vector<int>v,int i=0)
    {
        if(i==v.size()-1)
            vec.push_back(v);
        else
        {
            for(int j=i;j<v.size();j++)
            {
                swap(v[i],v[j]);
                Permutations(v,i+1);
                swap(v[i],v[j]);
            }
        }
        return vec;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int i=0;
        vector<vector<int>>res=Permutations(nums,i=0);
        return res;
    }


int main()
{

	    //cout<<"Hello World";
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    vector<vector<int>>res=permute(v);
    for(auto it:res)
    {
        for(int i:it)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}