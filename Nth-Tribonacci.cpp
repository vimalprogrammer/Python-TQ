/*
The Tribonacci sequence Tn is defined as follows: 
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.

Example 1:
Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

Example 2:
Input: n = 25
Output: 1389537
*/

#include <bits/stdc++.h>
using namespace std;

vector<int>dp;

int solve(int n)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n==0)
        return dp[n]=0;
    if(n==1 || n==2)
        return dp[n]=1;
    return dp[n]=solve(n-1)+solve(n-2)+solve(n-3);
}


int tribonacci(int n) 
{
    dp.resize(n+1,-1);
    return solve(n);
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       cout<<tribonacci(n)<<"\n";
    }
    return 0;
}

//Tabulation - DP

    int tribonacci(int n) {

        int arr[39];
        arr[0]=0; arr[1]=1;arr[2]=1;
        if(n<=2) return arr[n];
        for(int i=3;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        }
        return arr[n];
    }