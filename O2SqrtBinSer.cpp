#include <bits/stdc++.h>
using namespace std;

/*
This of course is a brute force solution but O(root n) complexity.
    int mySqrt(int x) {
        long long int i=1;
        while(i*i<=x)
        {
            i++;
        }
        int ans=i-1;
        return ans;
    }
*/

// This is a binary search solution.
int mySqrt(int x) 
{
        int low=1,high=x,ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long int msq=mid*mid;
            if(msq==x)
                return mid;
            else if(msq>x)
                high=mid-1;
            else
            {
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }

int main()
{
//    cout<<"Hello World";
    int n=2147395599;
    cout<<mySqrt(n);
    return 0;
}
