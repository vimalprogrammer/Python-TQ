/*
Help MLA 2

- Problem Description

Imagine you are an MLA of a district and there are N number of villages in your constituency.
Your job is to vaccinate all the people in your constituency in minimum amount of time. There are two centres where vaccination is going on. First centre takes m1 minutes as average time for vaccinating one person and second centre takes m2 minutes as average time.
Population of every village is known to you prior to the vaccination drive. Schedule all the villagers to any centre such that overall time for vaccinating all the people of all the villages will be minimum.
Assume that there is no wait time in between vaccinating two people. Also, people belonging to the same village will need to be vaccinated in the same centre.

For example:

First centre takes 2 min as average time
Second centre takes 4 min as average time
Population data of 3 villages is known: 10 30 20

Number of people in 3 villages is given:
v1 = 10, v2 = 30, v3 = 20

Consider if schedule is drawn by distributing equal number of people to both centres, then

First centre: 1 O 20 total time = (1 O + 20) * 2 = 60 min
Second centre: 30 total time = (30) * 4 = 120 min

Hence, minimum time required to vaccinate all the people will be = 120 min. i.e., Maximum of time taken in first centre or second centre.

But if it is scheduled like this:

First centre: 1 O 30 total time = (1 O + 30) * 2 = 80 min
Second centre: 20 total time = (20) * 4 = 8

Second line contains an integer m2 which is average time in minutes taken for vaccination by the second centre
Third line contains an integer N which is number of villages in the constituency 0 min

Minimum time required to vaccinate all the people will be = 80 min

Your job is to schedule these villages such that vaccination time should be minimum.

- Constraints

O < ml, m2 <= 20
0 < N < 100
O < Population of village<= 100

- Input

First line contains an integer ml which is average time in minutes taken for vaccination by the first centre
Second line contains an integer m2 which is average time in minutes taken for vaccination by the second centre
Third line contains an integer N which is number of villages in the constituency
Fourth line contains N space delimited integers denoting the population of villages

- Output

Print the villages which are scheduled at centre1 on first line and the villages which are scheduled at centre2 on second line. For better understanding refer Examples sections.
NOTE: -There are multiple answers possible for a given input. As long as your output meets all the conditions, any answer is acceptable.

- Time Limit (secs)
1

- Examples
Input
2
3
5
10 50 20 30 40

Output
10 50 30
40 20

Explanation

Given the data of room1 and room2:

First room takes 2 min as average time. Second room takes 3 min as average time. Number of villages in your constituency are 5.
Number of people in each of the 5 villages is given: 50 10 20 30 40

v1 = 50, v2 = 10, v3 = 20, v4 = 30, v5 = 40

If the schedule looks like this:

First room: 1 O 50 total time = (1 O + 50) * 2 = 120 min
Second room: 30 40 20 total time = (20 + 40 + 20) * 3 = 240 min

Minimum time required to vaccinate all the people will be = 240 min

But if the schedule is drawn like this:

First room: 10 50 30 total time = (10+50+30)*2=180 min
Second room: 40 20 total time = (40 + 20) * 3 = 180 min

Minimum time required to vaccinate all the people will be = 180 min
And output will be

10 50 30
40 20

Other possible outputs are

Solution 1 -  30 10 50
			  20 40
Solution 2 -  10 50 30
			  40 20

There could possibly be more solutions.

In all these cases time required to vaccinate the villagers is same and is the minimum.

Example 2

Input
1
2
3
100 90 70

Output
100 70
90

Explanation

Given the data of centre1 and centre2:

First room takes 1 min as average time. Second room takes 2 min as average time. There are 3 villages in your constituency.
Number of people in each of the 3 villages is given: 100 90 70

v1 = 100, v2 = 90, v3 = 70

If the schedule looks like this:

First room: 100 90 total time = (100 + 90) * 1 = 190 min
Second room: 70 total time = (70) * 2 = 140 min

Minimum time required to vaccinate all the people will be = 190 min

But if the schedule can be drawn like this:

First room: 100 70 total time = (100 + 70) * 1 = 170 min
Second room: 90 total time = (90) * 2 = 180 min

Minimum time required to vaccinate all the people will be = 180 min

And the output is:
100 70
90

Other possible output is
70 100
90

In both cases time required to vaccinate the villagers is minimum.

*/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

int sum1 = 0, sum2 = 0;
void solve()
{
  int m1,m2,n;
  cin>>m1>>m2>>n;
  vector<int> v(n);
  for(auto &x: v)
    cin >> x;
  vector<int> v1;
  vector<int> v2;
  sort(v.begin(),v.end());
  for (int i = n - 1; i >= 0; i--) 
  {
    int f = sum1 - sum2;
    int g = sum2 - sum1;
    if (abs(m1 * v[i] + f) < abs(m2 * v[i] + g)) 
    {
      sum1 += m1 * v[i];
      v1.push_back(v[i]);
    }

    else 
    {
      sum2 += m2 * v[i];
      v2.push_back(v[i]);
    }

  }
  for (int values: v1)
      cout<<values<<" ";
      
  cout<<endl;
  
  for (int values: v2)
      cout<<values<<" ";
}

signed main()
{
    solve();
  return 0;
}