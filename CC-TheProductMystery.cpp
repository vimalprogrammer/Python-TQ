/*
The product mystery Problem Code: PRODUCTSolvedSubmit
Given two positive numbers B and C, what is the minimum positive value of A, such that A⋅B is divisible by C.

Here, A⋅B denotes the value obtained when A is multiplied by B.

Input Format
The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers B and C.
Output Format
For each test case, output the minimum value of A such that A⋅B is divisible by C.

Constraints
1≤T≤105
1≤B,C≤109

Sample Input 1 
2
2 4
8 12

Sample Output 1 
2
3

Explanation
Test case 1: We have B=2 and C=4. If we choose A=2, then A⋅B=4, which is divisible by 4. Note that this is minimum positive value of A, such that A⋅B is divisible by C.

Test case 2: We have B=8 and C=12. If we choose A=3, then A⋅B=24, which is divisible by 12. Note that this is minimum positive value of A, such that A⋅B is divisible by C.
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b==0)return a;
    return gcd(b, a % b);   
}

int main(){
    int t;cin>>t;
    while(t--)
    {
        int b,c;cin>>b>>c;
        cout<<c/gcd(b,c)<<endl;
    }
}
