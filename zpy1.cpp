/*Example: 1) 3,2,6,5,1,4,8,9
Num1 : 3+2+6+9 =20
Num2: 5148
output: 5248+20 = 5168*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    vector<int>v={3,2,6,5,1,4,8,9};
    int n=v.size(),fivepos=0,eightpos=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=5)
            ++fivepos;
        else
            break;
    }
    for(int i=0;i<n;i++)
    {   
        if(v[i]!=8)
            ++eightpos;
        else
            break;
    }
    int size=n-(eightpos-fivepos);
    vector<int> result(size-1);
    auto start=v.begin();
    auto end=v.begin()+fivepos;
    copy(start, end, result.begin());
    for(int i=eightpos+1;i<n;i++)
        result.push_back(v[i]);
    int sum=0;
    for(auto it:result)
        sum+=it;
    cout<<sum<<"\n";
    string str1="";
    for(int i=fivepos;i<=eightpos;i++)
    {
        str1+=to_string(v[i]);
    }
    cout<<str1<<"\n";
    cout<<sum+stoi(str1)<<"\n";
/*  
//  Starting and Ending iterators
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
    copy(start, end, result.begin());
*/
}
