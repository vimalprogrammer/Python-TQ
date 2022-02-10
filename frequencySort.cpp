/*
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
*/

#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    unordered_map<char,int>mp;
    for(char c:s)
        mp[c]++;
    priority_queue<pair<int,char>>pqMaxHeap;
    for(auto it:mp)
        pqMaxHeap.push({it.second,it.first});

    string st="";
    while(!pqMaxHeap.empty())
    {
        auto x=pqMaxHeap.top().first;//int
        auto y=pqMaxHeap.top().second;//char
        st+=string(pqMaxHeap.top().first,pqMaxHeap.top().second);
        pqMaxHeap.pop();
    }
    return st;
}


int main()
{

//Code here...
    string s="viimallla";
    cout<<frequencySort(s);
    return 0;
}

