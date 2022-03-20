#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int countCoPrimes(unsigned int N)
{
    int cnt=0;
	for (int i = 1; i < N; i++) {
		if (gcd(i, N) == 1) {
			cnt++;
		}
	}

	return cnt;
}

int main()
{
    int n;cin>>n;
    cout<<countCoPrimes(n);
}
