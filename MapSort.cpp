#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int>& a, pair<char, int>& b)
{
	return a.second < b.second;
}

void sort(map<char, int>& M)
{
	vector<pair<char, int>>A;
	for(auto& it : M) 
	    A.push_back(it);
	sort(A.begin(), A.end(), cmp);
	for(auto& it : A)
		cout << it.first <<' '<< it.second << endl;
}

int main()
{
	map<char, int> M;
	M = {{'V', 3},{'S', 2 },{ 'R', 1 }};
	sort(M);
	return 0;
}
