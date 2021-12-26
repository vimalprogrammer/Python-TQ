#include <iostream>
using namespace std;

// ar={1,5,0,0,4,5,0,9}
// ar={1,5,4,5,9,0,0,0}

//loop ? 0: do swap with the next non zero number

int main()
{
    //cout<<"Hello World";
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]!=0)
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";    

    return 0;
}

//Linear time complexity solution

#include <iostream>
using namespace std;


int main()
{
    //cout<<"Hello World";
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int track=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[track]);
            track++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
