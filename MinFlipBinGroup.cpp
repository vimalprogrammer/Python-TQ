#include <bits/stdc++.h>
using namespace std;

void MinConSqFlips(vector<int>v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        if(v[i-1]!=v[i])
        {
            if(v[i]!=v[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else
                cout<<i-1<<"\n";
        }
    }
    if(v[n-1]!=v[0])
        cout<<n-1;
}

int main()
{
    //Minimum Consequtive flips
    // ar[]={1,0,0,1,0,0,0,1,1,1,0}
    //output:  1 to 2 then 4 to 6 then 10 to 10
    //Definitely 1 or 0 occurs same group or anyone might be in incre order 
    
    vector<int>v={1,0,0,1,0,0,0,1,1,1,0};
    MinConSqFlips(v);
    return 0;
}
