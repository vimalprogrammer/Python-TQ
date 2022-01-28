#include <bits/stdc++.h>
using namespace std;

void invCount(vector<int> &count, vector<pair<int, int>> &v, int low, int high)
{
    int mid=low+(high-low)/2, i=low, k=0, j=mid+1;
    vector<pair<int, int>> temp(high-low+1);
    
    while(i<=mid && j<=high)
    {
        if(v[i].first>v[j].first)
        {
            count[v[i].second] += high-j+1;
            temp[k++]=v[i++];
        }
        else    temp[k++]=v[j++];
        
    }
    while(i<=mid)
        temp[k++]=v[i++];

    while(j<=high)
        temp[k++]=v[j++];
    
    for(int x=low; x<=high; x++)
    {
            v[x]=temp[x-low];
    }
    
}

void mergeSort(vector<int> &count, vector<pair<int, int>> &v, int low, int high)
{
    if(low>=high)   return;
    int mid=low+(high-low)/2;
    mergeSort(count, v, low, mid);
    mergeSort(count, v, mid+1, high);
    invCount(count, v, low, high);
}

vector<int> countSmaller(vector<int>& nums) {
    int n=nums.size();
    vector<pair<int, int>> v;
    vector<int> count(n,0);
    for(int i=0; i<n; i++)
        v.push_back(make_pair(nums[i], i));
    
    mergeSort(count, v, 0, n-1);
    return count;
       
}

int main()
{
    //cout<<"Hello World";
    vector<int>v={5,2,6,1};
    vector<int>res=countSmaller(v);
    for(auto it:res)
        cout<<it<<" ";
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

int mergeSort(int arr[], int array_size)
{
	int temp[array_size];
	return _mergeSort(arr, temp, 0, array_size - 1);
}

int _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid, inv_count = 0;
	if (right > left) {
		mid = (right + left) / 2;
		inv_count += _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid + 1, right);
		inv_count += merge(arr, temp, left, mid + 1, right);
	}
	return inv_count;
}
int merge(int arr[], int temp[], int left, int mid, int right)
{
	int i, j, k;
	int inv_count = 0;

	i = left; 
	j = mid; 
	k = left; 
	while ((i <= mid - 1) && (j <= right)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
			inv_count = inv_count + (mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];

	while (j <= right)
		temp[k++] = arr[j++];

	vector<int>v1;
	for (i = left; i <= right; i++)
	{
		arr[i] = temp[i];
		v1.push_back(temp[i]);
	}

	return inv_count;
}

// Driver code
int main()
{
	int arr[] = { 2,4,1,3,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = mergeSort(arr, n);
	cout << " Number of inversions are " << ans;
	return 0;
}
*/