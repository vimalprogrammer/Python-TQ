
#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    string s;cin>>s;
    int n=s.size();
    int indexStart=0,indexEnd=0,maxCnt=1;
	    for(int i=0;i<n-1;i++)
	    {
	    	int st=i,ed=i;
	    	while(st>=0 && ed<n)
	    	{
	    		if(s[st]==s[ed])
	    		{
	    			st--;ed++;
	    		}
	    		else
	    			break;
	    	}
	    	int substrcnt=ed-st-1;
	    	if(substrcnt>maxCnt)
	    	{
	    		maxCnt=substrcnt;
	    		indexStart=++st;
	    		indexEnd=--ed;
	    	}
	    }


	    for(int i=0;i<n-1;i++)
	    {
	    	int st=i,ed=i+1;
	    	while(st>=0 && ed<n)
	    	{
	    		if(s[st]==s[ed])
	    		{
	    			st--;ed++;
	    		}
	    		else
	    			break;
	    	}
	    	int substrcnt=ed-st-1;
	    	if(substrcnt>maxCnt)
	    	{
	    		maxCnt=substrcnt;
	    		indexStart=++st;
	    		indexEnd=--ed;
	    	}
	    }

    cout<<maxCnt<<endl;
    for(int i=indexStart;i<=indexEnd;i++)
		cout<<s[i];    

    return 0;
}

