#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="abb";//cin>>s;
    int n=s.size();
    int indexStart=0,indexEnd=0,maxCnt=1;
    
    //ODD Length Palindrome
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

    //EVEN Length Palindrome
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
    cout<<s.substr(indexStart,maxCnt);
    
    return 0;
}