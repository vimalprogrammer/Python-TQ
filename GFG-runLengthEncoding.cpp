#include <iostream>
using namespace std;

void printcharcnt(string st)
{
    string s=st;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        while(i<n-1 && s[i]==s[i+1])
        {
            cnt++;
            i++;
        }
        cout<<s[i]<<cnt;
    }
}


int main()
{
//    cout<<"Hello World";


//iterate through every element-outerloop
    //iterate through every element-innerloop
        //checking i==i+1 or not
    string s="aaaabbvimalttt";
    printcharcnt(s);
    return 0;
}
