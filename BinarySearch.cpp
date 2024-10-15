#include<iostream>
using namespace std;
//using binary search to find key
int binarySearch(int sample_arr[], int left, int right, int key)
{
	cout << right << endl;
	//base condition
	if (right >= left)
	{
		int mid = left + (right - left) / 2;
		if (sample_arr[mid] == key)
		{
			return mid;
		}
		if (sample_arr[mid] > key)
		{
			return binarySearch(sample_arr, left, mid - 1, key);
		}
		if (sample_arr[mid] < key)
		{
			return binarySearch(sample_arr, mid+1, right, key);
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56 };
	int key = 23;
	int right = sizeof(arr) / sizeof(arr[0]);
	cout << sizeof(arr) << "  " << sizeof(arr[0]) << endl;
	cout << binarySearch(arr, 0, right-1, key);
}