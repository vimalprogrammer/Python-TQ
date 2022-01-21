#include <bits/stdc++.h>
using namespace std;



//Not worked in two test cases in leetcode
vector<vector<int>> findPair(vector<int>v)
{
	int n=v.size();
	sort(v.begin(),v.end());
	int l=0,r=0;
	vector<vector<int>> v2d;
	for(int i=0;i<n-2;i++)
	{
		l=i+1,r=n-1;
		while(l<r)
		{
		    int flag=0;
		    int checkEqO=v[i]+v[l]+v[r];//-1,0,1,2,-1,-4
			if((checkEqO==0) && (i!=l && l!=r && i!=r))
			{
				flag=1;
                v2d.push_back({v[i],v[l],v[r]});
			}
			if((v[i]+v[l]+v[r])>0)
				r--;
			else
				l++;	
            if(flag==1)
                checkEqO=-1;
         }
	}
    sort(v2d.begin(), v2d.end());
    v2d.erase(unique(v2d.begin(), v2d.end()), v2d.end());
	return v2d;
}


int main()
{
//Code here...
    vector<int>v={0,0,0,0,0,0};
    vector<vector<int>>res=findPair(v);
    for(auto it:res)
    {
    	for(auto i:it)
    		cout<<i<<" ";
    	cout<<"\n";
    }
    return 0;
}

