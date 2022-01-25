class Solution {
public:
    bool isIsomorphic(string s, string t) {
    int l1=s.length(),l2=t.length();
    if(l1!=l2)
        return false;
    map<char,int>m1,m2;

    for(int i=0;i<l1;i++)
    {
        if(m1[s[i]]!=m2[t[i]])//if already paired
            return false;
        m1[s[i]]=m2[t[i]]=i+1;//pairing
    }
    return true;
    }
};


/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Input: s = "egg", t = "add"
Output: true
*/