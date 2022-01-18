#include<bits/stdc++.h>
using namespace std;

int main()
{
    // //For Single digit number 
    // string s="a4t5u2u1";
    // int n=s.size();
    // for(int i=0;i<n;i++)
    // {
    //     if(int(s[i])>47 && int(s[i])<58)
    //     {
    //         int t=int(s[i])-48;
    //         while(t--)
    //             cout<<s[i-1];
    //         t=0;
    //     }
    // }

    // //For Multiple digit number

    string s="v100t2y1";
    int n=s.size();
    int sum=0,t=0;
    char c=s[0];
    string str="";
    for(int i=1;i<n+1;i++)
    {
        if(int(s[i])>47 && int(s[i])<58)
        {
            t=int(s[i])-48;
            sum=sum*10+t;
        }
        else
        {
            while(sum--)
            {
                str+=c;
            }
            c=s[i];
            sum=0;
        }
    }
    cout<<str;
}