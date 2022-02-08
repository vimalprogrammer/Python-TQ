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
    vector<vector<int>>vec;
public:
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
};

