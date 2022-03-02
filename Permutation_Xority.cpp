/*
You are given an integer N. Construct a permutation A of length N which is attractive.

A permutation is called attractive if the bitwise XOR of all absolute differences of adjacent pairs of elements is equal to 0.

Formally, a permutation A=[A1,A2,…,AN] of length N is said to be attractive if:

|A1−A2|⊕|A2−A3|⊕…⊕|AN−1−AN|=0
where ⊕ denotes the bitwise XOR operation.

Output any attractive permutation of length N. If no attractive permutation exists, print −1 instead.

Note: A permutation of length N is an array A=[A1,A2,…,AN] such that every integer from 1 to N occurs exactly once in A. For example, [1,2,3] and [2,3,1] are permutations of length 3, but [1,2,1], [4,1,2], and [2,3,1,4] are not.

*/

/*
Sample Input 1 
2
3
6
Sample Output 1 
3 2 1
5 2 3 6 4 1 
Explanation
Test Case 1: |3−2|⊕|2−1|=1⊕1=0
Note that there are other correct answers — for example, [1,2,3] would also be accepted as correct.

Test Case 2: |5−2|⊕|2−3|⊕|3−6|⊕|6−4|⊕|4−1|=3⊕1⊕3⊕2⊕3=0Sample Input 1 
2
3
6
Sample Output 1 
3 2 1
5 2 3 6 4 1 
Explanation
Test Case 1: |3−2|⊕|2−1|=1⊕1=0
Note that there are other correct answers — for example, [1,2,3] would also be accepted as correct.

Test Case 2: |5−2|⊕|2−3|⊕|3−6|⊕|6−4|⊕|4−1|=3⊕1⊕3⊕2⊕3=0
*/


// LOGIC - If n is odd then just the all the arr ele - diff xor Adjacent permutation zero
// If even - 2 3 1 4 5 6 ==> (2-3)^(3-1)^(1-4)^(4-5)^(5-6) ==> (((1^2^3^1^1=0)))  

// INTUITION - always 1^2^3 gives 0, and hence we just xor all other consecutive numbers and get 0


#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
#define rep(i,n) for (int i=0;i<n;i++)
#define repi(i,x,n) for (int i=x;i<n;i++)
#define br cout<<endl
#define vi vector<int>
using namespace std;

void Xority()
{
    int n;
    cin>>n;
    int a[n];
    if (n==2 )
    {
        cout<<-1<<endl;
        return;
    }
    if(n&1)
    {
        for (int i=n;i>0;i--) 
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i=1;i<=n;i++) 
        a[i-1]=i;
        
    a[0]=2;
    a[1]=3;
    a[2]=1;
    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
}

signed main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        Xority();
    }
}