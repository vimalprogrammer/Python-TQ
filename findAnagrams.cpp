#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p)
{
        int n = s.size(),m=p.size();
        vector<int> ans;
        if(m>n)return ans;
        vector<int> a(26,0),b(26,0);
        for(auto x: p)
            a[x-'a']++;

        for(int i=0;i<m;i++)
            b[s[i]-'a']++;

        for(int i=m;i<n;i++)
        {
            if(a==b)ans.push_back(i-m);
            b[s[i-m]-'a']--;
            b[s[i]-'a']++;
        }
        if(a==b)ans.push_back(n-m);//if last part is anagram
        return ans;
}

int main()
{
//    cout<<"Hello World";
vector<int>v=findAnagrams("cbaebabacd","abc");
for(auto it:v)
    cout<<it<<" ";
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) 
{
    vector<int>res;
    int m=s.length();
    int n=p.length();
    if(n>m)
        return {};
    vector<int>dummy1(26,0);
    vector<int>dummy2(26,0);
    for(int i=0;i<n;i++)
        dummy1[p[i]-'a']++;//pattern array
    for(int i=0;i<n;i++)
        dummy2[s[i]-'a']++; 
    for(int i=n;i<m;i++)
    {
        if(dummy1==dummy2)
            res.push_back(i-n);
        dummy2[s[i-n]-'a']--;
        dummy2[s[i]-'a']++;
    }
    if(dummy1==dummy2)
        res.push_back(m-n);//for checking the last anagram  
    return res;
}

int main()
{
//    cout<<"Hello World";
vector<int>v=findAnagrams("abab","ab");
for(auto it:v)
    cout<<it<<" ";
    return 0;
}
*/