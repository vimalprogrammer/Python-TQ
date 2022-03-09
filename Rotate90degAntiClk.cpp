/*
Explanation:
Input: 
3
1 2 3
4 5 6
7 8 9
*/

#include <bits/stdc++.h>
using namespace std;

void matrixRotAntiClkwise(vector<vector<int>>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(v[i][j],v[j][i]);//Transpose of a matrix
        }
    }
    for(int i=0;i<n;i++)
    {
        int low=0,high=n-1;
        while(low<high)
        {
            swap(v[low][i],v[high][i]); //Rotate 90 degree Anti clk wise
            low++;
            high--;
        }        
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code here...
    vector<vector<int>>v;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int>dummy1d;
        for(int j=0;j<n;j++)
        {
            int a;cin>>a;
            dummy1d.push_back(a);
        }
        v.push_back(dummy1d);
    }

    matrixRotAntiClkwise(v,n);
    for(auto it:v)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

