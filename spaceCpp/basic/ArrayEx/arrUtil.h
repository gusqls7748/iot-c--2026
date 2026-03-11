#ifndef ARRUTIL_H
#define ARRUTIL_H
#include <iostream>
using namespace std;

template <typename T, size_t N>

void printArr(T(&arr)[N]) {
	for (size_t i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// 배열의 크기를 지정해서 초기화하는 함수
template <size_t N>
int(&initArr(int(&arr)[N]))[N] {
	for (size_t i = 0; i < N; i++) {
		arr[i] = i;
	}
	return arr;
}

// 배열의 요소를 섞는 함수
//template <size_t N>
//int(&shuffleArr(int(&arr)[N]))[N] {
//	for (size_t i = 0; i < N-1; i++) {
//		//size_t j = rand() % (N - 1) + i; // i부터 N -1 사이의 랜덤한 인덱스 선택
//		size_t j = getRandom<size_t> % (N - 1) + i; // i부터 N -1 사이의 랜덤한 인덱스 선택
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[i] = tmp;
//	}
//	return arr;
//}

//template<typename T>
//T getRandom(T min, T max) {
//	static std::random_device rd;
//	static std::mt_device rd;
//
//}

#endif 
