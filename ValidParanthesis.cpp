#include <bits/stdc++.h>
using namespace std;


bool isValid(string s) {
    
        int n=s.length();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')')
            {
                if(st.empty() || st.top()!='(')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]==']')
            {
                if(st.empty() || st.top()!='[')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]=='}')
            {
                if(st.empty() || st.top()!='{')
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }

int main()
{
    string s="(){}";
    cout<<isValid(s);
    return 0;
}

