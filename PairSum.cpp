//a1=5,7,4,6
//a2=1,2,3,8
//Output: the pair which gives the sum of 8 is (6,2)
//Explanation:
//The pair (6,2) is the only pair which gives the sum of 8 which makes 
//the sum of two vectors equal to 8.


#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int>&v1,vector<int>&v2)
{
    int sumv1=accumulate(v1.begin(),v1.end(),0);
    int sumv2=accumulate(v2.begin(),v2.end(),0);
    return sumv1==sumv2;
}

int main()
{
    vector<int>v1={5,7,4,6};//20 //5 7 4 2 = 18
    vector<int>v2={1,2,3,8};//16  //1 6 3 8 = 18
    vector<int>t1=v1;
    vector<int>t2=v2;
    pair<int,int>pair1;
    int sumv1=0;
    for(auto it:v1)
        sumv1+=it;
    int sumv2=0;
    for(auto it:v2)
        sumv2+=it;
    int sum=abs(sumv1-sumv2);
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i]+v2[j]==sum)
            {
                int temp=v1[i];
                v1[i]=v2[j];
                v2[j]=temp;
                if(helper(v1,v2)==true)
                {
                    cout<<v2[j]<<" : "<<v1[i];
                    return 0;
                }
            }
            v1=t1;
            v2=t2;
        }
    }
    return 0;
}