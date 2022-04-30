#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum)
{
    unordered_set<int>st;
    for(int i=0;i<arr_size-2;i++)
    {
        int cur=sum-A[i];
        for(int j=i+1;j<arr_size;j++)
        {
            if(st.find(cur-A[j])!=st.end())
                return true;
            st.insert(A[j]);
        }
    }
    return false;
}

int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 51;
	int arr_size = sizeof(A) / sizeof(A[0]);
	cout<<find3Numbers(A, arr_size, sum);

	return 0;
}