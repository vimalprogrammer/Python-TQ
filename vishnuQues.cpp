#include <iostream>
using namespace std;

int main()
{
    //cout<<"Hello World";
    string s="breezzzeeee";
    //output: brefzabefgh
    int n=s.length();
    for(int i=1;i<n;i++)
    {
        int cnt=0,cnt2=1;
        char t=s[i-1];
        while(t==s[i])
        {
            int p=s[i];
            t=s[i];
            if(p==122)
            {
                s[i]='a'+char(cnt);
                cnt++;
            }
            else
            {
                s[i]=char('a'+(p%97)+cnt2);
                cnt2++;
            }
            i++;
        }
    }
    cout<<s;

    return 0;
}
