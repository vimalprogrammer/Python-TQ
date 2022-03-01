//Sample Input
// 8 4 6 1
//Sample Output
// 3

#include <bits/stdc++.h>
using namespace std;

int TimesFolded(int a,int b,int c,int d)
{
    int cnt=0;
    while(c!=a)
    {
        if(c>a/2)
        {
            a=c;
            cnt++;
        }
        else
        {
            a/=2;
            cnt++;
        }
    }
    while(d!=b)
    {
        if(d>b/2)
        {
            b=d;
            cnt++;
        }
        else
        {
            b/=2;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    //cout<<"Hello World";
    int a,b,c,d;cin>>a>>b>>c>>d;
    cout<<TimesFolded(a,b,c,d);
    return 0;
}
