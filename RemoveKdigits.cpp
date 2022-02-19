/*
Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

Example 1:
Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.

Example 2:
Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

Example 3:
Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        // number of operation greater than length we return an empty string
        if(num.length() <= k)   
            return "0";
        
        // k is 0 , no need of removing /  preforming any operation
        if(k == 0)
            return num;
        
        string res = "";// result string
        stack <char> s; // char stack
        
        s.push(num[0]); // pushing first character into stack
        
        for(int i = 1; i<num.length(); ++i)
        {
            while(k > 0 && !s.empty() && num[i] < s.top())
            {
                // if k greater than 0 and our stack is not empty and the upcoming digit,
                // is less than the current top than we will pop the stack top
                --k;
                s.pop();
            }
            
            s.push(num[i]);
            
            // popping preceding zeroes
            if(s.size() == 1 && num[i] == '0')
                s.pop();
        }
        
        while(k && !s.empty())
        {
            // for cases like "456" where every num[i] > num.top()
            --k;
            s.pop();
        }
        
        while(!s.empty())
        {
            res.push_back(s.top()); // pushing stack top to string
            s.pop(); // pop the top element
        }
        
        reverse(res.begin(),res.end()); // reverse the string 
        
        if(res.length() == 0)
            return "0";
        
        return res;   
    }
};




//-------------------------------------------------------------------------//

// BETTER EASY SOLUTION WITHOUT STACK

class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        string s="";
        for(char c:num)
        {
            while(s.size() && s.back()>c && k)
            {
                k--;
                s.pop_back();
            }
            if(s.size() || c!='0')
                s.push_back(c);
        }
        while(s.size() && k--) // if k is greater than 0, we have to pop the stack 
            s.pop_back();
        return (s=="")?"0":s;
    }
};  

//------------------------------EXPLANAION------------------------------//

/*The way to solve this question is using a stack.
We initally push an element into tthe stack(non zero).
When we encounter the next element we check if it is smaller than the element present in the stack if so pop the element from
the stack and push this element.Why? because he current element has the cacpacity of producting a smaller number as compared to the latter.But we have to limit the pops upto k(cuz only k deletions allowed).
Let us use an example to understand it better:-
num = "1432219", k = 3
we first push 1 into the stack
           |         |
           |         |
           |         |   <-----Stack representation
           |   1     |
           |_________|

now we encounter 4 we check if 4 is lesser than 1 as it is not we push into the stack.

           |         |
           |         |
           |         |   <-----Stack representation
           |   4     |
           |___1_____|

then 3 comes as it is lesser than the top of the stack we pop 4 out and we push 3 in while simultaneously decrementing k . 

           |         |
           |         |
           |         |   <-----Stack representation  k=2
           |   3     |
           |___1_____|

2 beats 3 so 3 is popped out and 2 is pushed and k is decremented.

           |         |
           |         |
           |         |   <-----Stack representation  k=1
           |   2     |
           |___1_____|
2 doesnt beat 2 so it is pushed into the stack

           |         |
           |         |
           |   2     |   <-----Stack representation
           |   2     |
           |___1_____|
1 beats 2 so 2 is popped out and 1 is pushed in.

           |         |
           |         |
           |   1     |   <-----Stack representation   k=0
           |   2     |
           |___1_____|    
now we have the push whatever number is left as we have used up all our deletions

           |         |
           |   9     |
           |   1     |   <-----Stack representation
           |   2     |
           |___1_____|

           answer:-1219.

We will take another example to make sure our algorithm doesnt have leading 0s.

num = "10200", k = 1

           |         |
           |         |
           |         |   <-----Stack representation
           |   1     |
           |_________|
0 beats 1 but we should push 0 as this will cause leading zeros so we push the element if(ans.size()||c!='0') meaning
if ans.size()==0 and c=='0' it wouldnt push.

but we wedelete 1 as we have to fulfil the condition of the number of deleteions.

           |         |
           |         |
           |         |   <-----Stack representation   k=0
           |   2     |
           |_________|

           push  rest of the elements by making use of if(ans.size()||c!='0')push(element).



           |         |
           |   0     |
           |   0     |   <-----Stack representation   k=0
           |   2     |
           |_________|


           answer is 200
For optimization purposes we use a string as stack (s.push_back() and s.pop_back()).

   */