#define _CRT_SECURE_NO_WARNINGS // strcpy 같은 구형 함수의 보안 경고를 끌려고

// C++ 클래스
#include <iostream>

// 구조체 출력
class Human {
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char* aname, int aage,const char* ajob) {
		strcpy(name, aname);		//name = aname;
		age = aage;
		strcpy(job, ajob);			//job = ajob;
	}
	void show() {
		std::cout << "name: " << name << ", age: " << age << ", job: "  << job << std::endl;
	}
};

int main()
{
	Human h("hong", 29, "student");
	//Human h1();
	h.show();

	return 0;
}