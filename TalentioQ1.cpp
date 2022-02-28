#include <bits/stdc++.h>
// #include <cstdlib>
// #include "ordered_map.h"

using namespace std;

// static bool(pair<int,char>a,pair<int,char>)
//     return a.second>b.second;


// C++ program to swap keys
// and values of a map
// using STL MultiMap
    
// Function which swaps keys and
// values of a map and
// returns a multimap.
// template <typename K, typename V>
// multimap<V, K>
// invertMap(map<K, V> const& myMap)
// {
  
//     multimap<V, K> myMultiMap;
  
//     // Traverse the map and
//     // pushback the values -> keys
//     for (auto const& pair : myMap) 
//     {
//         myMultiMap.insert(make_pair(pair.second,pair.first));
//     }
//     return myMultiMap;
// }
  
// // Function to call the swap operation
// void swap(map<unsigned long long int, char> char_frequency,vector<unsigned long long int>v)
// { 
//     // create a multimap of int, char
//     multimap<char, unsigned long long int> freq_char = invertMap(char_frequency);

//     for (auto it = freq_char.begin();it != freq_char.end();++it)
//         cout << it->first << "   "<< it->second << "\n";

//  	string st="";
// 	int n=20;
// 	for(int i=25;i>=0;i--)
//     {
//      	if((n/v[i])>0)
// 		{
// 			st+=freq_char[i]*(n/v[i]);
// 			n%=v[i];
// 		}
// 	}
// 	cout<<"\n"<<st<<" ";
// }

int main()
{
    //int n;cin>>n;
    //cout<<"Hello World";
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<unsigned long long int>v={1,3};
    int t=1;
    for(int i=4;i<28;i++)
    {
        unsigned long long int x=i*v[t++];
        v.push_back(x);
    }
    // for(auto it:v)
    //     cout<<it<<" ";
    
    map<unsigned long long int,char>mp;
    int j=0;
    for(int i=65;i<91;i++)
    {
        mp[v[j++]]=(char)(i);
    }
    // sort(mp.begin(),mp.second(),cmp)
    // for(auto it:mp)
    //     cout<<it.second<<" : "<<it.first<<" \n";
    //swap(mp,v);
 	string st="";
	int n=20;
	for(int i=26;i>=0;i--)
    {
     	if((n/v[i])>0)
		{
			st+=mp[v[i]]*(n/v[i]);
			n%=v[i];
		}
	}
	cout<<st<<" ";
}

//A:1 B:3 C:12 D:60 .....formula C = i*B+B=3*3+3=12
	// string st="";
	// int n=20;
	// for(int i=25;i>=0;i--)
 //    {
 //     	if((n/v[i])>0)
	// 	{
	// 		st+=mp[v[i]]*(n/v[i]);
	// 		n%=v[i];
	// 	}
	// }
	// cout<<st<<" ";
        //26 -->CBBAA
        //Output -->AABBC Lexi order