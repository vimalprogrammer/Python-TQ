//Generate all substrings of a string
//Input: abc
//Output: abc ab ac a bc b c

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
	vector<string>v;

vector<string> subStrings(string s,string curSubStr,int i=0)
{
    if(i==s.length())
    	v.push_back(curSubStr);
	else
	{
		subStrings(s,curSubStr+s[i],i+1);
		subStrings(s,curSubStr,i+1);
	}
	return v;
}
};

int main()
{
    //cout<<"Hello World";
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    Solution obj;
    string s="abc";
    vector<string>res=obj.subStrings(s,"",0);
    for(auto it:res)
    	cout<<it<<" ";
    return 0;
}


//without classes and its access modifiers
/*
#include <bits/stdc++.h>
using namespace std;


vector<string>v;

vector<string> subStrings(string s,string curSubStr,int i=0)
{
    if(i==s.length())
    	v.push_back(curSubStr);
	else
	{
		subStrings(s,curSubStr+s[i],i+1);
		subStrings(s,curSubStr,i+1);
	}
	return v;
}

int main()
{
    //cout<<"Hello World";
    string s="abc";
    vector<string>res=subStrings(s,"",0);
    for(auto it:res)
    	cout<<it<<" ";
    return 0;
}
*/