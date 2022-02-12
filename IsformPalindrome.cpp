//is palindrome can be formed from the given binary string or not

//Input: 01001
//Output: Yes

//Input: 0101
//Output: Yes

//Input: 0001
//Output: No

//Explanation:
//The given binary string is 01001 -> 10001 or 01010 YES
//The given binary string is 0101 -> 1001 or 0110 YES 
//The given binary string is 0001 -> Not possible to form palindrome


#include<bits/stdc++.h>
using namespace std;

int main() {
        
    string s="01001";//forms a palindrome
    int n=s.length();
	int zero = 0, one = 0;
	for (int i = 0; i < n; i++) 
	{
	    if (s[i] == '0')
			zero++;
		else
			one++;
	}
	if (n % 2 == 0) 
	{
		if (zero == one)
			cout << "YES" << endl;
		else if (zero % 2 == 0 && one % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	} 
	else
		cout << "YES" << endl;
	
    return 0;
}