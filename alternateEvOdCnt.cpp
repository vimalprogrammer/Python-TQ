
#include <bits/stdc++.h>
using namespace std;

int alterEvOdCnt(vector<int>v)
{
	int res=1;
	int n=v.size();
	int cnt=1;
	for(int i=1;i<n;i++)
	{
		if((v[i-1]%2==0 && v[i]%2!=0) || (v[i-1]%2!=0 && v[i]%2==0))
		{
			cnt++;
			res=max(cnt,res);
		}
		//Another nice condition
		/*
		  if ((a[i] + a[i + 1]) % 2 == 1) {
            cnt++;
        }
        */
		else
		{
			cnt=1;
		}
	}
	if(res==1)
		return 0;
	return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
	vector<int>v={5,10,20,6,3,8,5,8,9,10};
	int res=alterEvOdCnt(v);    
    cout<<res<<"\n";
    return 0;
}

