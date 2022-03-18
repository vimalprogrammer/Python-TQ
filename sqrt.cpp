/*
Given an integer x, 
find the square root of x. If x is not a perfect square, then return floor(√x).
*/

/*
Explaination:
Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.

Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect 
square, so its square root is 2.
*/

#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    int s=0,e=x-1;
    long long int sqrtx=1;
    if(x>1)
    {
        while(s<=e)
        {
            long long int mid=(s+e)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                e=mid-1;
            else
            {
                sqrtx=mid;
                s=mid+1;   
            }
        }
    }
    return sqrtx;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends