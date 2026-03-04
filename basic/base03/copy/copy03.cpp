/*깊은 복사 (deep copy)*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char* m_name;	// 포인터 사용 (동적 할당을 위함)
	int m_age;
public:
	// 1. 일반 생성자: 문자열의 길이만큼 메모리를 동적으로 할당(new)
	Person(const char* name, int age) {
		printf("생성자 호출!!\n");
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);
		m_age = age;
	}
	// 2. 깊은 복사 생성자 (핵심!)
	// 원본 객체의 포인터 주소만 복사하는 게 아니라, 새로운 메모리를 할당해서 내용을 복사합니다.
	Person(const Person& other) {
		printf("복사생성자 호출!!\n");
		m_name = new char[strlen(other.m_name) + 1];	// +1하는 이유 공간확보하기 위해
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	void showPerson() {
		printf("이름: %s, 나이: %d\n", m_name, m_age);
	}

	// 3. 소멸자: new로 할당한 메모리는 반드시 delete로 해제해야 메모리 누수가 없습니다.
	~Person() {
		printf("소멸자 호출\n");
		delete[] m_name;
	}
};

int main() {
	// [객체 생성] 생성자 호출 -> "홍길동" 저장용 메모리 할당
	Person man("홍길동", 100);
	man.showPerson();

	// [복사 생성] 복사 생성자 호출 -> 별도의 새로운 메모리 할당 후 내용 복사
	Person Cpman = man;
	Cpman.showPerson();


	return 0;
}
