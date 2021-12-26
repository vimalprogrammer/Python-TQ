#include <iostream>
using namespace std;

int main()
{
    //cout<<"Hello World";
    //{3,7,5,9,2,3,5}
    //{5,9}

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //int n=sizeof(a)/sizeof(a[0]);
    int cur_leader=a[n-1];
    cout<<cur_leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(cur_leader<a[i])
        {
            cur_leader=a[i];
            cout<<cur_leader<<" ";
        }
    }
    
    return 0;
}
