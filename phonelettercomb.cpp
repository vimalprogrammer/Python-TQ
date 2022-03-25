/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<string> letterCombinations(string digits) {
	if(digits == "") return {};
	vector<string> mappings{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans{""};
	for(auto digit : digits){
		vector<string> extendCombination;
		for(auto& currentCombination : ans)
			for(auto newChar : mappings[digit - '2'])
				extendCombination.push_back(currentCombination + newChar);                            
		ans = move(extendCombination); // same as ans = extendCombination, just avoids copying each value. You Can also use swap(ans,extendCombination)
	}
	return ans;
}
};