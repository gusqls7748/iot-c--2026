// 복사 생성자, 얕은 복사
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> // strcpy 사용을 위한 헤더

class Person {
private:
	char m_name[20];
	int age;
public:
	// 1. 일반 생성자: 이름과 나이를 받아 객체를 생성
	Person(const char* name, int age) {
		printf("생성자호출\n");
		strcpy(m_name, name);
		this -> age = age;
	}
	void viewPerson() {
		printf("name: %s, 나이: %d\n", m_name, this->age);
	}
};


int main() {
	// 2. 일반적인 객체 생성 (생성자 호출)
	Person p("홍길동", 100);
	p.viewPerson();

	// 3. 대입 연산자를 이용한 복사 생성 (Person p1(p)와 동일)
	Person p1 = p;	// 객체를 복사해서생성한다.
	p1.viewPerson();

	// 4. 명시적인 복사 생성자 호출
	Person p2(p);	// 복사 생성자 호출
	p2.viewPerson();

	return 0;
}