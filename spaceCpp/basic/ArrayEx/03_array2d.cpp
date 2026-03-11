#include <iostream>
#include <iomanip>
#include "arrUtil.h"
using namespace std;

int main() {
	int arr[] = { 1,2,3,4,5 };
	int sum = 0;
	for (int i = 0; i < size(arr);i++) {
		sum += arr[i];
	}
	cout << "sum " << sum << endl;
	cout << "average:  " << static_cast<double>(sum) / size(arr) << endl;

	int arr2[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	printArr(arr2);

	for (int i = 0; i < size(arr2); i++) {
		for (int j = 0;j < size(arr2[i]);j++) {
			cout << setw(2) << (arr2[i][j]) << " ";
		}
		cout << endl;
	}

	int temp[4][5];
	memset(temp, 0, sizeof(temp)); //tmp 배열을 0으로 초기화
	
	for (int i = 0; i < size(arr2); i++) {
		for (int j = 0; j < size(arr2[j]);j++) {
			temp[i][j] = arr2[i][j];
			//temp[size(arr2)[j] += arr2[i][j];
			//temp[j][size(arr2[i])] += arr2[i][j];
			cout << setw(2) << (temp[i][j]) << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < size(temp); i++) {
		for (int j = 0;j < size(temp[i]); j++) {
			cout << setw(2) << temp[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}