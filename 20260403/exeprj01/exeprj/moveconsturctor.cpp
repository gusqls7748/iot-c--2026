#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {// 클래스 생성
private:
	char* name;
	int age;
public:
	Human(const char* name, int age) {
		std::cout << "일반생성자" << std::endl;
		int length = strlen(name);
		this->name = new char[length];
		strcpy(this->name, name);
		this->age = age;
	}
	Human(const Human& other) {
		std::cout << "복사생성자" << std::endl;
		int length = strlen(other.name);
		this->name = new char[length];
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	Human(Human&& other) noexcept{
		std::cout << "이동생성자" << std::endl;
		name = other.name;
		age = other.age;

		other.name = nullptr;
		other.age = 0;

	}
	void viewHuman() {
		std::cout << "이름: " << name << "," << "나이: " << age << std::endl;
	}

};

int main() {
	Human h("홍길동", 100);	// 객체 생성
	h.viewHuman();

	Human h2(h);
	h2.viewHuman();

	Human h3(std::move(h));
	h3.viewHuman();
	

	return 0;
}