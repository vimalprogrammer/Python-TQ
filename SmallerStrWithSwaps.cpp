/*
You are given a string s, and an array of pairs of indices in the string pairs where pairs[i] = [a, b] indicates 2 indices(0-indexed) of the string.

You can swap the characters at any pair of indices in the given pairs any number of times.

Return the lexicographically smallest string that s can be changed to after using the swaps. 

Example 1:

Input: s = "dcab", pairs = [[0,3],[1,2]]
Output: "bacd"
Explaination: 
Swap s[0] and s[3], s = "bcad"
Swap s[1] and s[2], s = "bacd"

Example 2:
Input: s = "dcab", pairs = [[0,3],[1,2],[0,2]]
Output: "abcd"
Explaination: 
Swap s[0] and s[3], s = "bcad"
Swap s[0] and s[2], s = "acbd"
Swap s[1] and s[2], s = "abcd"

Example 3:

Input: s = "cba", pairs = [[0,1],[1,2]]
Output: "abc"
Explaination: 
Swap s[0] and s[1], s = "bca"
Swap s[1] and s[2], s = "bac"
Swap s[0] and s[1], s = "abc"
*/

class Solution {
    vector<int>parent; 
public:
    
    int findParent(int n){
        if(parent[n]==n){
            return n; 
        }
        return parent[n] = findParent(parent[n]); 
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
        parent.resize(s.length());
        map<int , set<int>>obj;
        set<int>idx;
        string ans=s;
        
        
        for(int i=0; i<parent.size(); i++){
            parent[i]=i;
        }
        
        for(int i=0; i<pairs.size(); i++){
            int u = pairs[i][0];
            int v = pairs[i][1];
            int fx = findParent(u);
            int fy = findParent(v);
            
            if(fx!=fy){
                parent[fy]=fx; 
            }
                 
        }
        for(int i=0; i<pairs.size(); i++){
            
            int u = pairs[i][0];
            int v = pairs[i][1];
            
            int fx = findParent(u);
            obj[fx].insert(u);
            obj[fx].insert(v);
              
        }
        
        for(auto it = obj.begin(); it!=obj.end(); it++){
            
            idx = it->second;
            vector<pair<char,int>>t; 
            auto index=idx.begin(); 
            
            for(index=idx.begin(); index!=idx.end(); index++){
                 
                 int pos = *index;
                 char ch = s[pos]; 
                 t.push_back({ch,pos}); 
            }
            
            sort(t.begin() , t.end()); 
            index=idx.begin(); 
            
            for(int i=0; i<t.size(); i++){ 
                 
                ans[*index] = t[i].first;
                index++; 
            } 
        
        }
       
        return ans;
    }
};