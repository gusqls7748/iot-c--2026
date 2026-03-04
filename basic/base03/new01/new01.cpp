#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main() {
	// C 언어 배열 

	//int* arr;
	//int size;
	//
	//printf("배열크기를 입력하세요: ");
	//scanf("%d", &size);
	//arr = (int*)malloc(sizeof(int) * size);

	//printf("%d 숫자를 입력하시오.\n", size);
	//for (int i = 0; i < size; i++) {
	//	printf("%d 번째 숫자: ", i + 1);
	//	scanf("%d", arr + i);
	//}

	//for (int i = 0; i < size; i++) {
	//	if (arr != nullptr) {			// 역참조 경고 처리
	//		//printf("%d\n", *(arr + i));
	//		printf("%d\n", arr[i]);

	//	}
	//}

	// C++ 언어
	int size;
	int* arr;
	std::cout << "배열 크기: ";
	std::cin >> size;

	// 동적 할당: 포인터 = new 자료형[개수];
	arr = new int[size];	// 동적 할당: 포인터 = new 자료형

	// 할당된 총 메모리 크기 확인 (int 크기 * 개수)
	std::cout << "만든 배열 크기" << sizeof(int) * size << std::endl;

	// 할당된 배열 사용 예시 (C언어와 동일하게 인덱스 사용 가능)
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}

	delete[] arr;			// 동적 할당 해제

	return 0;
}