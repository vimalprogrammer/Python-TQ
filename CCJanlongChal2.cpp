#include <iostream>
using namespace std;

int main() {
	// your code goes here

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	int t;cin>>t;
	while(t--)
	{

	    int d1,d2,d3,s1,s2,s3;
	    cin>>d1>>d2>>d3>>s1>>s2>>s3;
	    int sumd=d1+d2+d3;
	    int sums=s1+s2+s3;
	    if((sumd>sums) || (sumd==sums && d1>s1) || (sums==sumd && d1==s1 && d2>s2) || (sums==sumd && d1==s1 && d2==s2 && d3>s3))
	    {
	        cout<<"DRAGON"<<"\n";
	    }
	    else if((sumd<sums) || (sumd==sums && d1<s1) || (sums==sumd && d1==s1 && d2<s2) || (sums==sumd && d1==s1 && d2==s2 && d3<s3))
	    {
	        cout<<"SLOTH"<<"\n";
	    }
	    else
	        cout<<"TIE\n";
	}
	return 0;
}

