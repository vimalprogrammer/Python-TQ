#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<string>CasePermutation(string input)
{
	int n = input.length();
	int max = 1 << n;
	vector<string>strpermute;
	for (int i = 0; i < max; i++) 
	{
        int flag=0;
		string combination = input;
		for (int j = 0; j < n; j++)
        {
            if(isalpha(input[j]))
            {
			    if (((i >> j) & 1) == 1)
				    combination[n-j-1] = toupper(input.at(n-j-1));// In ascii order 000,001,010,011,100...-xyz,xyZ,xYz,xYZ,Xyz...
            }	
                //combination[j] = toupper(input.at(j)); //non binary order - problem based
        }
		// Printing current combination
		   strpermute.push_back(combination);
	}
    return strpermute;
    }
};

// Driver code
int main()
{
    Solution s;
	vector<string>res=s.CasePermutation("xyz"); //output : xyz xyZ xYz xYZ Xyz XyZ XYz XYZ 
	for(auto it:res)
	    cout<<it<<" ";
	return 0;
}
