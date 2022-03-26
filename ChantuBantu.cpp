/*
Chantu and Bantu are the hostlers and like any other hostler have very less money with them. They promised their girlfriends, Rani and Sheena that they would give them N number of gifts on their birthday. The birthday is next week and Chantu and Bantu are trying to figure out a way to make them happy.
They went to a gift shop which consists of G number of gifts and now need your help to determine the minimum money they will have to arrange to buy N gifts. Once you tell them the amount of money required, they will plan out something to arrange for the money. Can you help them figure out the minimum money required to buy N gifts?

Example:
Number of gifts available in the shop, G = 8
Number of gifts to be bought, N = 3

The minimum amount of money Chantu Bantu have to spend to buy 3 gifts = 10 + 20 + 30 = 60

Input Format:
The first line of input consists of number of test cases, T
The first line of each test case consists of number of gifts Chantu Bantu have to buy, N
The second line of each test case consists of number of gifts available in the shop, G
The thirds line of each test case consists of G space-separated integers representing the price of G gifts where the first integer represents the price of first gift and so on.

Constraints
1<= T <=10
1<= G <=100000
1<= N <=G
0<= Price of Gift <=10000000

Output Format
For each test case, print the minimum amount of money Chantu Bantu has to pay to buy the N gifts.

Sample TestCase 1
Input
2
3
8
50 70 30 100 80 20 150 10
4
6
10 20 32 412 500 11

Output
60
73

Explanation
Test Case 2:
Number of gifts to be bought, N = 4

Number of gifts available, G = 6

Minimum amount of money Chantu Bantu has to pay = 10 + 20 + 32 + 11 = 73

*/

/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[])
{
    //Write code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;cin>>t;
	while(t--)
	{
		long long int x,y;cin>>x>>y;
		vector<int>v;
		for(long long int i=0;i<y;i++)
		{
			long long int a;cin>>a;
			v.push_back(a);
		}
        long long int sum=0;
        sort(v.begin(),v.end());
        for(long long int i=0;i<x;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<"\n";
	}
}
