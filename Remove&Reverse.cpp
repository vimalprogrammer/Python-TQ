// Input:google
//Output:elog

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>   
#include<bits/stdc++.h>
using namespace std;

void remove(vector<char>&v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) 
    {
        end = remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
    for(int i=v.size()-1;i>=0;i--)
    {
      cout<<v[i];
    }
}

int main() {                             
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  string s;cin>>s;
  vector<char>vec;
  for(int i=0;i<s.size();i++)
  {
    vec.push_back(s[i]);
  }
  remove(vec);
return 0;
}
