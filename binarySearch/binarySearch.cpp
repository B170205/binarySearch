// binarySearch.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int binarySearch(int a[], int n, int data)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	int i;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (data == a[mid])
			return mid;
		else if (data > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
}
//递归
int binarySearch_r(int a[], int low,int high, int data)
{
	int mid;
	int i;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (data == a[mid])
			return mid;
		else if (data > a[mid])
			return (binarySearch_r(a, mid + 1, high, data));
		else
			return(binarySearch_r(a, low, mid - 1, data));
	}
}
int main()
{
	int a[8] = { 1,2,3,4,5,6,7,8 };
	int pos=binarySearch_r(a, 0,7, 8)+1;
	printf("%d\n", pos);
	return 0;
}

