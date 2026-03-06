//네임스페이스(Namespace), 
// 자료형 변환(Type Conversion)
// 데이터 오버플로우(Overflow)

#include <iostream>
using namespace std; // cout, cint, endl, string, thread
using std::cout;
static int sum;	// 파일 내부에서 공유되는 정적 전역 변수

// 네임스페이스 A: 이름 충돌을 방지하기 위한 구역 설정
namespace A {
	void printAll() {
		cout << "A" << endl;
		sum = 10;
	}
}

// 네임스페이스 B: A와 동일한 이름의 함수를 가질 수 있음
namespace B {
	void printAll() {
		cout << "B" << endl;
	}
}// 

int main() {
	std::cout << "Hello World" << std::endl;
	A::printAll();
	B::printAll();
	unsigned short us = -2367;
	cout << us << endl;
	double x = 23.56;
	int y = 30;
	// 1. 암묵적 자료형 변환 (Implicit Cast)
	cout << "암묵적 자료형 변환 활용 : " << x + y << endl; //53.56
	// 2. 명시적 자료형 변환 (Explicit Cast - C++ 스타일)
	cout << "명시적 자료형 변환 활용 : " << static_cast<int>(x) + y << endl; //53
	// 3. 명시적 자료형 변환 (C 스타일)
	cout << "명시적 자료형 변환 활용 : " << (int)(x) + y << endl; 

	// 부동소수점 한계 테스트
	double num1 = +numeric_limits<double>::max();
	double num2 = -numeric_limits<double>::max();
	cout << "부동소수점의 오버플로우:" << num1 * 1000 << endl;
	cout << "부동소수점의 오버플로우:" << num1 * 1000 << endl;
	cout << "sum : " << sum << endl;

}

