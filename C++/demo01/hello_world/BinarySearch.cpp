#include <iostream>
using namespace std; 
#define N 10

int BinarySearch( int A[], int n, int find )
{ //二分查找，n=序列元素个数 find=欲查找数据
	int low, upper, mid;
	low = 0, upper = n - 1; //左右两部分
	while( low <= upper ){
		mid = low + ( upper - low ) / 2; //不用(upper+low)/2,避免溢出
		if( A[mid] < find ){
			low = mid + 1; //右半部分
		}
		else if( A[mid] > find ){
			upper = mid - 1; //左半部分
		}
		else return mid; //找到
	}
	return -1; //未找到
}

int main()
{
	int A[N] = {8, 24, 30, 47, 62, 68, 83, 92, 95}, i, find;
	cin >> find;
	i = BinarySearch(A, N, find);
	if( i >= 0 ){
		cout << "A[" << i << "]=" << find << endl;
	} else {
		cout << "Not find~" << endl;
	}
	
	return 0;
}