class Solution {
public:
    bool isAnagram(string s, string t) {
    int n1=s.length();
    int n2=t.length();
    if(n1!=n2)
        return false;
    int i=0;
    map<char,int>m1,m2;
    while(i<n1)
    {
        m1[s[i]]++;
        m2[t[i]]++;
        i++;
    }
    i=0;
    for(auto it:m1)
    {
        if(it.second!=m2[it.first])
            return false;
    }
    return true;
    }
};