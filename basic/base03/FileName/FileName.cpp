#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring> // strcpy 사용을 위한 헤더

using namespace std; // 이 줄을 추가하거나, 아래에서 std::를 붙여야 합니다.

class SoSimple {
private:
	int num;
public:
	// 생성자: 멤버 변수 num을 n으로 초기화
	SoSimple(int n) : num(n)
	{	}
	// 일반 맴버 함수: 객체의 데이터를 수정할 수  있음
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	// 일반 맴버 함수
	void SimpleFunc() {
		cout << "SimpleFunc: " << num << endl;
	}
	// const 맴버 함수
	void SimpleFunc() const {
		cout << "Const SimpleFunc: " << num << endl;
	}
};

// 매개변수로 const 참조자를 받음
void YourFunc(const SoSimple& obj) {
	obj.SimpleFunc();
}
int main(void) {

	SoSimple obj1(2);		// 일반 객체 생성
	const SoSimple obj2(7);// 상수(const)객체 생성

	// 1.일반 객체는 일반 함수를 호출한다. 
	obj1.SimpleFunc();
	
	// 2. 상수 객체는 반드시 const 함수를 호출합니다.
	obj2.SimpleFunc();

	// 3. YourFunc는 내부적으로 obj를 const로 취급합니다.
	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}