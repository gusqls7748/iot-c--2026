/* 이동 생성자(moveconstructor) 
		: 복사생성자는 객체를 모두 복사해서 사용하고 이동생성자는 원본 객체를 복사하지 않는다.
		std::move 호출은 객체를	rvalue로 캐스팅하여 이동생성자에 전달된다.	
		(주소를 새객체로 복사하고 기존 객체는 null로 처리한다(소유권 이전)
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring> // strcpy 사용을 위한 헤더

using namespace std; 

class Human {
	char name[30];	// 문자열을 '배열'로 선언 (고정된 메모리 공간)
	int age;
public:
	// 1. 일반 생성자: 이름과 나이를 받아 초기화
	Human(const char* name, int age) {
		cout << "** 일반 생성자 호출 **" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	// 2. 복사 생성자: 기존 객체(other)를 그대로 복사해서 새 객체 생성
	Human(const Human& other) {
		cout << "** 복사생성자 호출 **" << endl;
		// [중요] 현재 name이 char 배열[30]이므로, 실제 데이터 복사가 일어납니다.
		strcpy(this->name, other.name );
		this->age = other.age;
	}
	// 3. 이동 생성자: 기존 객체(other)의 자원을 '뺏어오는' 생성자
	Human(Human&& other) noexcept{					//noexceppt:예외를 방출하지 않을 함수로 선언한다.
		cout << "** 이동생성자 호출 **" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;

		// other.name = nullptr; name을 배열로 써서 그렇다. 배열은 실제 복사가 이루어진다.
		other.age = 0;										// other객체가 더 이상 유호한 데이터를 가지지 않도록 보장한다.
	}
	void showHuman() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};


int main() {

	Human h("홍길동", 100);				// 일반 생성자 호출
	h.showHuman();

	Human cph(h);						// 복사 생성자 호출
	cph.showHuman();

	Human cph2(move(h));	// move라는 임시객체로 만드는것, 이동생성자 호출
	cph2.showHuman();
	h.showHuman();

	return 0;
}