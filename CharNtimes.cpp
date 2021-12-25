#include <iostream>
using namespace std;

int main()
{
    //cout<<"Hello World";
    // str=a2d3
    //aaddd
    
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        char ch;
        //int flag=1;
        for(int i=0;i<s.size();i++)
        {
            int flag=1;
            int temp=0;
            if(isalpha(s[i]))
            {
                ch=s[i];
            }
            else
            {
                while(isdigit(s[i]))
                {
                    temp=temp*10+(int)(s[i]-48);
                    i++;
                    flag=0;
                }
                if(flag==0)
                    i--;
                while(temp--)
                {
                    cout<<ch;
                }
            }
                
        }
    }
    return 0;
}
