// C++ program to find triplets in a given
// array whose sum is equal to given sum.
#include <bits/stdc++.h>
using namespace std;

// function to print triplets with given sum
void findTriplets(int arr[], int n, int sum)
{
	for (int i = 0; i < n - 1; i++) {
		// Find all pairs with sum equals to
		// "sum-arr[i]"
		unordered_set<int> s;
		for (int j = i + 1; j < n; j++) {
			int x = sum - (arr[i] + arr[j]);
			if (s.find(x) != s.end())
				printf("%d %d %d\n", x, arr[i], arr[j]);
			else
				s.insert(arr[j]);
		}
	}
}

// Driver code
int main()
{
	int arr[] = { 0, -1, 2, -3, 1 };
	int sum = -2;
	int n = sizeof(arr) / sizeof(arr[0]);
	findTriplets(arr, n, sum);
	return 0;
}
