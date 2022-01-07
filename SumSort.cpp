#include <bits/stdc++.h>
using namespace std;

int sumofDigit(int n)
{
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

vector<int>SumSort(vector<int>v)
{
    vector<pair<int,int>>pairsWithSum;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        pairsWithSum.push_back(make_pair(sumofDigit(v[i]),v[i]));
        
        sort(pairsWithSum.begin(),pairsWithSum.end());
    }
    vector<int>resVctr;
    for(int i=0;i<n;i++)
    {
        resVctr.push_back(pairsWithSum[i].second);
    }
    return resVctr;
}


int main()
{
    //cout<<"Hello World";
    
    vector<int>v={12, 10, 102, 31, 15};
    vector<int>res=SumSort(v);
    for(auto i:res)
        cout<<i<<" ";
    return 0;
}
