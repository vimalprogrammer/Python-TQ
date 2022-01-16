#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) 
{
    int n=digits.size();
    for(int i=n-1;i>=0;i--)
    {
        digits[i]+=1;
        if(digits[i]==10)
        {    
            digits[i]=0;
            if(i==0)
                digits.insert(digits.begin(),1);
        }
        else
            break;
    }
    return digits;
}

int main()
{
    //cout<<"Hello World";

    vector<int>vec={9,9};//output {1,0,0} --> 99+1=100
    vector<int>res=plusOne(vec);
    for(auto it:res)
        cout<<it<<" ";
    return 0;
}
