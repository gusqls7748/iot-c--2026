#include <iostream>
// 함수 오버로딩 : 이름은 같지만 매개변수의 개수, 타입, 또는 순서가 다른 여러 함수를 같은 범위 내에 정의하는 기능
// 함수입력이 같지만 함 전달되는 인자의 정보는 다르다

// 함수의 정의 3가지 형태: 함수호출, 함수 선언, 함수 정의

/*-------------함수 오버로딩의 이해-----------------*/
//int MyFunc(int num) {
//	num++;
//	return num;
//
//}
//
//int MyFunc(int a, int b) {
//	return a + b;
//}
/*---------디폴트 값의미-----------*/
// 함수 선언; 여기서 디폴트 값(1, 2)을 설정합니다.
// 인자가 전달되지 않으면 num1=1, num2= 를 기본으로 사용하겠다는 뜻이다.
//int Adder(int num1 = 1, int num2 = 2);
//
//int main(void) {
//
//	// 인자를 아무것도 넣지 않았으므로 num1=1, num2=2가 적용됩니다. (1 +2)
//	std::cout << Adder() << std::endl;
//	// 인자를 5 넣음 이값은 매개변수인 num1에 전달 된다.
//	// num2는 전달받은 값이 없으므로 디폴트 값인 2를 사용한다 (5 + 2) = 7
//	// 결과가 7이 나온다.
//	std::cout << Adder(5) << std::endl;;
//	// 인자를 (3, 5)받아 모두 넣는다 디폴트 값은 무시한다.
//	// num1 = 3, num2 = 5 적용 3 + 5 = 8
//	// 결과 8이다.
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}
//
//// 함수 선언: 선언부에서 디폴트 값을 정했으므로 여기서 적지않는다.
//int Adder(int num1, int num2) {
//	return num1 + num2;
//}

/*-----------이름 공간 기반의 함수 선언과 정의의 분리-----------------*/
//namespace BestComImpl {
//	void SimpleFunc(void);	// 이름 공간 기반의 함수 선언과 저의의 분리
//}
//
//namespace ProgComImpl {
//	void SimpleFunc(void);	// 함수 선언
//}
//
//int main(void) {
//	BestComImpl::SimpleFunc();	// BestComImpl안에 있는 SimpleFunc실행해줘
//	ProgComImpl::SimpleFunc();	// ProgComImpl안에 있는 SimpleFunc실행해줘
//
//	return 0;
//}
//
//void BestComImpl::SimpleFunc(void) {
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void) {
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}

/*---const(상수선언)----*/
//using namespace std;
//
//int main(void) {
//	//int num1 = 10;
//	//num1 = 20;
//	//cout << num1 << endl;
//
//	//const int num2 = 10;
//	//cout << num2 << endl;
//
//	int num2 = 20;
//
//	const int* p1 = &num2;
//	cout << num2 << endl;
//	cout << *p1 << endl;
//
//	//p1 = 10;
//	int n3 = 22;
//	p1 = &n3;
//	
//	cout << *p1 << endl;
//
//	/* 3. 포인터 자체가 상수 (Constant Pointer) */
//	int n2 = 40;
//	int* const p2 = &n2;
//
//	*p2 = 50;
//	//p2 = &n3;
//	cout << *p2 << endl;
//
//
//	return 0;
//}

/*----------*/

using namespace std;
//int main(void) {
//	int num1 = 1020;
//	int& num2 = num1;
//	num2 = 3047;
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//	cout << "VAL: " << &num1 << endl;
//	cout << "REF: " << &num2 << endl;
//
//	return 0;
//
//}

/*----포인터 변수 대상의 참조자 선언----*/
using namespace std;

int main(void) {
	int num = 12;
	int* ptr = &num;	// 1단계 포인터: num의 주소를 저장
	int** dptr = &ptr;	// 2단계 포인터(더블 포인터 ): ptr의 주소를 저장

	int& ref = num;	 // 일반 변수 num에 대한 참조자

	int* (&pref) = ptr; // 포인터 변수 ptr에 대한 참조자
	int** (&dpref) = dptr; // 더블 포인터 변수 dptr에 대한 참조자

	cout << ref << endl; // num의 값 12 출력
	cout << *pref << endl; // pref는 ptr과 같으므로 *ptr의 값인 12출력
	cout << **dpref << endl; // dpref는 dptr과 같으므로 **dptr의 값인 12출력


	return 0;
}