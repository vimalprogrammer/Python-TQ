/*
Given a string, S find the rank of the string amongst all its permutations sorted lexicographically.The rank can be big. So print it modulo 1000003. 
Note: Return 0 if the characters are repeated in the string.

Example 1:

Input: S = "abc"
Output: 1
Explaination: It is the smallest 
lexicographically string of the permutation.

Example 2:

Input: S = "acb"
Output: 2
Explaination: This is the second smallest
lexicographically string of the permutation.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    
public:

    int fact(int i)
    {
    	if (i <= 1) return 1;
      	else return i*fact(i-1);
    }
    
    int rank(string s){
            // code here
        string k =s;
        sort(k.begin() , k.end());
        unordered_set<char>st;
        for(char ch:k) st.insert(ch);
        if(s.size()!=st.size()) 
            return 0;
        
        int chArr[256]={0};
        int n=s.length();
        int mul=fact(n);
        for(int i=0;i<n;i++)
            chArr[s[i]]++;
        for(int i=1;i<256;i++)
            chArr[i]+=chArr[i-1];
        int res=1;
        for(int i=0;i<n-1;i++)
        {
            mul=mul/(n-i);
            res+=chArr[s[i]-1]*mul;
            for(int j=s[i];j<256;j++)
                chArr[j]--;
        }
        return res%1000003;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends


//ALITER APPROACH
//-----> Inbuild next_permutation method <----------//

int rank(string S)
{    
	string k =S;
    sort(k.begin() , k.end());
       
    unordered_set<char>s;
    for(char ch:k) s.insert(ch);
    
    if(S.size()!=s.size()) return 0;
      
    int ans=1;
    while(k!=S)
    {
       next_permutation(k.begin() , k.end());
       ans++;
       ans=ans%1000003; 
    }
    return ans%1000003;
}
