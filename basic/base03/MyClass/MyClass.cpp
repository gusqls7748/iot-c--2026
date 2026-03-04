#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
	char name[30];
	int number;
public:
	// 1. 일반 생성자: 이름과 번호를 받고 초기화
	MyClass(const char* name= "", int number = 0) {
		cout << "** 기본 학생 호출 **" << endl;
		strcpy(this->name, name);
		this->number = number;
	}
	// 2.복사 생성자: 기존 객체를 그대로 복사해서 새 객체 생성
	MyClass(const MyClass& other) {
		cout << "** 복사생성자 호출 **" << endl;
		strcpy(this->name, other.name);
		this->number = other.number;
	}
	MyClass(MyClass&& other) noexcept { //noexceppt:예외를 방출하지 않을 함수로 선언한
		cout << "** 이동생성자 호출 **" << endl;
		strcpy(this->name, other.name);
		this->number = other.number;

		other.number = 0;
	}
	void showClass() {
		cout << "이름: " << name << ", 번호: " << number << endl;
	}
};

int main() {

	MyClass m("천현빈", 29);
	m.showClass();

	MyClass cla(m);
	cla.showClass();

	MyClass cla2(move(m));
	cla2.showClass();
	m.showClass();
		

	return 0;
}