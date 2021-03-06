#include<iostream>
using namespace std;

bool binSearch(int a[], int left, int right, int x)
{
	if (left > right) return false;
	if (left <= right)
	{
	   int mid = (right + left-1) / 2;
	   if (a[mid] == x) return true;
	   if (a[mid] > x) return binSearch(a, left, mid - 1, x);
	   if (a[mid] < x) return binSearch(a, mid + 1, right, x); 
	}
	
}
int main()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i = i + 1)
	{
		cin >> a[i];
	}
	int left = 0,right = n - 1;
	if (binSearch(a, left, right, x) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}