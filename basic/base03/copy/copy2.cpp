// 객체 생성
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// 클래스와 생성 맴버는 같음 클래스 이름이 똑같으면
class Person {
private:
	char m_name[20];
	int m_age;
// 출력이 없지만 생성함수
public:
	// 1. 일반 생성자 (Constructor)
	// 객체가 처음 만들어질 때 호출되어 멤버 변수를 초기화합니다.
	Person(const char *name, int age) {		// constructor
		printf("constructor!!\n");
		strcpy(m_name, name);
		m_age = age;
	}

	// 2. 복사 생성자 (Copy Constructor)
	// 기존 객체(other)를 참조하여 새로운 객체를 만들 때 호출됩니다.
	Person(const Person &other) {					// copy construtor - 객체를 복사하여 초기화하므로 복사생성자 호출.
		printf("constructor!!\n");					// 입력이나 출력이 객체일떄는 복사생성자가 호출된다
		strcpy(m_name, other.m_name);				// 복사생성자 인수는 상수 레퍼런스를 사용한다.
		m_age = other.m_age;

	}

	// 3. 소멸자 (Destructor)
	// 객체가 메모리에서 사라질 때(함수 종료 등) 자동으로 호출됩니다.
	// 생성된 객체 수만큼 호출되는 것이 특징입니다.
	~Person() {
		printf("나는 소멸자입니다!!\n");
	}

	void showPerson() {
		printf("이름: %s 나이: %d\n", m_name, m_age);
	}
};


int main() {
	
	// [객체 1 생성] 일반 생성자 호출
	Person m("홍길동", 100);
	m.showPerson();

	// [객체 2 생성] 복사 생성자 호출 (m을 복사)
	Person copym(m);
	copym.showPerson();

	// [객체 3 생성] 복사 생성자 호출 (m을 복사)
	Person copym1(m);
	copym1.showPerson();

	return 0;
	// main 함수가 끝나면서 생성된 순서의 역순으로 
	// 소멸자가 총 3번 호출됩니다. (copym1 -> copym -> m)
}

/*
	기본생성자. 기본복사생성자, 소멸자는 디폴트로 제공된다.
*/