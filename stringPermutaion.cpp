// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
void permute(string at, int i=0)
{
    int it=i;
    string a=at;
	// Base case
	if (i == a.length()-1)
		cout<<a<<endl;
	else
	{
		// Permutations made
		for (int j=i; j < a.length(); j++)
		{

			// Swapping done
			swap(a[i], a[j]);

			// Recursion called
			permute(a, i+1);

			//backtrack
			swap(a[i],a[j]);
		}
	}
}

// Driver Code
int main()
{
	string str = "ABC";
	permute(str, 0);
	return 0;
}


// Leetcode permutation problem - Return all permutations of a given string
class Solution {
private:
    vector<string>vec;
public:
    vector<string>Permutations(string v,int i=0)
    {
        if(i==v.length()-1)
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
    vector<string> permute(string nums,int i=0) {
        vector<string>res=Permutations(nums,i=0);
        return res;
    }
};

// Driver Code
int main()
{
        Solution s;
        string str = "ABC";
        vector<string>res=s.permute(str, 0);
        for(auto it:res)
            cout<<it<<" ";
        return 0;
}