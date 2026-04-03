#include <iostream>

class Myclass {
private:	// 캡슐화: 데이터를 함부로 건드리지 못하게 잠그는 것
	int a; // 맴버 변수
public:
	// 1.  생성자 ; 객체가 태어날 때(메모리에 올라갈 때) 딱 한 번 호출됩니다.
	Myclass(int aa) : a(aa) {
		std::cout << a << " constructor " << std::endl;
	}

	// 2. 소멸자 : 객체가 죽을 때(범위를 벗어날 때) 자동으로 호출됩니다, 파일을 닫거나, 빌린 메모리를 반납하는 등 뒷정리를 할 때 주로 사용합니다
	~Myclass() {
		std::cout << a << " destructor " << std::endl;
	}

	// 3. 복사 생성자 (Copy Constructor) : 기존에 있던 객체를 복사해서 똑같은 새 객체를 만들 때 호출됩니다.
	Myclass(const Myclass& other) : a(other.a) {
		std::cout << a << " copy constructor " << std::endl;
	}
};


int main() {
	//Myclass obj(10);

	Myclass obj1 = Myclass(20);		// 우측값은 임시객체가 아니다 Myclass obj1(20)
	Myclass(30);					// 이름없는 임시객체 이름이 없어서 태어나자마자 바로 소멸함


	std::cout << "bye~~" << std::endl;

	return 0;
}