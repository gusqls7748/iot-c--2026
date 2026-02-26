#include <stdio.h>

int a;	// 초기화 되지 않은 전역 변수
int global_C = 100; // 초기화 된 전역변수
int func() {	// 함수
	return 1;
}

int main()
{
	int b;	// 지역 변수
	static int c; // 초기화 되지 않은 정적(static) 변수
	const int d = 10;	 // const 는 상수 받을 떄 쓰는것 , 지역 상수는 일반적으로 스택에 할당
	char arr[20] = "hi"; // 지역 배열 변수
	char* parr = "hong"; // parr 자체는 [stack]에 문자열 "hong"은 문자열 영역주소

	printf("func: %p\n", &func);	// 코드 영역 주소
	printf("globa a: %p\n", &a);	// BSS 영역 주소
	printf("local b: %p\n", &b);	// 스택영역주소
	printf("global_C: %p\n", &global_C); // Data 영역 주소
	printf("static c: %p\n", &c);	// BSS 영역 주소
	printf("const d: %p\n", &d);	// 스택 영역 주소
	printf("array: %p\n", arr);		// 스택 영역 주소
	printf("parr: %p\n", parr);		// 문자열 영역주소


	return 0;
}

/*
	메모리구조
	data segment: stack, heap, data 그 외의 것들이 저장된다.
	code segment: s 함수 저장된다.
*/