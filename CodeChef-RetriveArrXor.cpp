#include <bits/stdc++.h>
using namespace std;
long long findXOR(long long n)
{
    long long mod = n % 4;
 
    // If n is a multiple of 4
    if (mod == 0)
        return n;
 
    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;
 
    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;
 
    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
    return -1;
}
int main()
{
 long long t;
 cin>>t;
 while(t--)
 {
     long long n,x;
     cin>>n>>x;
     if(x== 5*pow(10,5))
     {
        long long xxx = findXOR(n-2);
        for (long long i = 1; i < n-1; i++)
        {
            cout << i << ' ';
        }

        long long ans1= pow(2,17);
        for (long long i = 0; i < 17; i++)
        {
            long long k = xxx>>i;
            if(k&1) ans1+=pow(2,i);
        }
        cout << ans1 << ' ' << 500000-pow(2,17) << endl;
         continue;
     }
     if(x>100000)
     {
         if(n%4==0)
         {
             for (long long i = 1; i < n; i++)
             {
                 cout << i << ' ';
             }
             cout << x << endl;
             
         }
         else if(n%4==1)
         {
             for (long long i = 0; i < n-1; i++)
             {
                 cout << i << ' ';
             }
             cout << x << endl;
         }
         else if (n%4==2)
         {
             for (long long i = 1; i < n; i++)
             {
                 cout << i << ' ';
             }
             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
             
         }
         else
         {
             for (long long i = 0; i < n-1; i++)
             {
                 cout << i << ' ';
             }
                 if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
             
         }
         
     }
     else
     {
         if (n%4==0)
         {
             if(x==1)
             {
               for (long long i = 3; i <= n-1; i++)
               {
                   cout << i << ' ';
               }
               cout << "262143 131072 131069\n";
               continue;
                  
             }
            long long xx = pow(10,5)+3+1;
             for (long long i = 0; i < n-2; i++, xx++)
             {
                 cout << xx << ' ';
             }
             cout << "0 ";
             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
         }
         else if (n%4==1)
         {
             long long xx = pow(10,5)+3+1;
             for (long long i = 0; i < n-1; i++, xx++)
             {
                 cout << xx << ' ';
             }
             cout << x << endl;
             
         }
        else if (n%4==2)
        {
            long long xx = pow(10,5)+3+1;
             for (long long i = 0; i < n-2; i++, xx++)
             {
                 cout << xx << ' ';
             }
             cout << x << " 0" << endl;
        }
        else
        {
            long long xx = pow(10,5)+3+1;
             for (long long i = 0; i < n-1; i++, xx++)
             {
                 cout << xx << ' ';
             }
             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
        }
     }
 }
return 0;
}